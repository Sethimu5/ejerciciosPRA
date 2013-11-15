#include "bots.h"
#include "botclient.h"
#include <SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <boost/asio.hpp>
#include <boost/thread/thread.hpp>

#include <boost/archive/text_iarchive.hpp> 
#include <boost/archive/text_oarchive.hpp> 


using boost::asio::ip::tcp;

void send(tcp::socket &socket, const std::string & str) {
    boost::asio::write(socket, boost::asio::buffer(str + "\n"), boost::asio::transfer_all());
}

void set_screen(int w, int h, int fw, int fh) {

    SDL_SetVideoMode(w, h, 0, SDL_OPENGL | SDL_RESIZABLE);
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, fw, 0, fh);
    glClearColor(0.0, 0.0 ,0.0, 0);

}


void game_thread(std::shared_ptr<tcp::socket> socket, bool &gameover, bots*& bots, bot::team_id &id) {

    //bot_client ia(*bots);

    // send(*socket, "basura");


    boost::asio::streambuf buf;
    while(!gameover) {

        read_until(*socket, buf, "\n"); 

        std::string data;
        std::istream is(&buf);
        std::getline(is, data); 

        std::istringstream stream(data);

        std::string command;
        stream >> command;

        if(command == "team") {
            stream >> id;
        }
        else if(command == "state") {
            
            std::stringstream state;
            while(!stream.eof()) {
                std::string a;
                stream >> a;
                state << a << " ";
            }

            std::cout << state.str() << std::endl;
            boost::archive::text_iarchive ia(state); 
            ia >> *bots;
            std::cout << "w: " << bots->_width << std::endl;
            std::cout << "h: " << bots->_height<< std::endl;
        }

    }
}

int main(int argc, char* argv[])
{

    if(argc < 3) {
        std::cout << argv[0] << " " << "[server] [port]" << std::endl;
        return -1;
    }
    else {

        bot::team_id id = 1000;

        boost::asio::io_service io_service;

        tcp::resolver resolver(io_service);
        auto endpoint_iterator = resolver.resolve({ argv[1], argv[2] });

        std::shared_ptr<tcp::socket> socket(new tcp::socket(io_service));
        boost::asio::connect(*socket, endpoint_iterator);

        int field_width = 2;
        int field_height = 2;

        const int win_width = 500;
        const int win_height = 500;

        bots * bots = nullptr;


        //SDL_Init(SDL_INIT_VIDEO);
        //atexit(SDL_Quit);

        //SDL_WM_SetCaption("bots", "bots");

        //SDL_GL_SetAttribute( SDL_GL_RED_SIZE, 5 );
        //SDL_GL_SetAttribute( SDL_GL_GREEN_SIZE, 5 );
        //SDL_GL_SetAttribute( SDL_GL_BLUE_SIZE, 5 );
        //SDL_GL_SetAttribute( SDL_GL_DEPTH_SIZE, 16 );
        //SDL_GL_SetAttribute( SDL_GL_DOUBLEBUFFER, 1 );

        //set_screen(win_width, win_height, field_width, field_height);

        //glShadeModel( GL_SMOOTH );

        SDL_Event event;
        bool gameover = false;


        boost::thread t = boost::thread([socket, &gameover, &bots, &id] () { game_thread(socket, gameover, bots, id); } );


        while (!gameover) {

            //if (SDL_PollEvent(&event)) {
                //switch (event.type) {
                    //case SDL_QUIT:
                        //gameover = true;
                        //break;
                    //case SDL_KEYDOWN:
                        //switch (event.key.keysym.sym) {
                            //case SDLK_ESCAPE:
                            //case SDLK_q:
                                //gameover = true;
                                //break;
                        //}
                        //break;
                    //case SDL_VIDEORESIZE:
                        //set_screen(event.resize.w, event.resize.h, field_width, field_height);
                        //break;

                //}
            //}

            //glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

            //glMatrixMode(GL_MODELVIEW);

            //if(bots) {
                //bots->for_each_bot([&bots] (const bot & the_bot) {
                        //auto t = the_bot.get_team() + 1;

                        //glColor3f(t * 0.1, t * 0.3, t * 0.5);

                        //const bot::position & pos = the_bot.get_position();

                        //// WARNING deprecated OpenGL!
                        //glLoadIdentity();
                        //glTranslatef(pos.first, pos.second, 0);

                        //glBegin(GL_QUADS); 
                        //glVertex3f(0.0f, 0.0f, 0.0f);
                        //glVertex3f(1.0f, 0.0f, 0.0f);
                        //glVertex3f(1.0f, 1.0f, 0.0f);
                        //glVertex3f(0.0f, 1.0f, 0.0f); 
                        //glEnd();
                        //});
            //}

            //SDL_GL_SwapBuffers();

            //if(bots) {
                //gameover = gameover || bots->game_over();
            //}
        }

        if(bots && bots->game_over()) {
            if(bots->bot_count().size() != 1) {
                std::cout << "it's a tie!" << std::endl;
            }
            else {
                for(auto kv : bots->bot_count()) {
                    std::cout << kv.first << " wins!" << std::endl;
                }
            }
        }

        // cleanup needed!


        send(*socket, "goodbye");
        return 0;
    }
}

