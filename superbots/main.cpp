#include "bots/bots.h"
#include "superbots.h"
#include "conn.h"
#include "screen.h"

#include <boost/asio.hpp>
#include <boost/thread/thread.hpp>

#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <boost/thread/mutex.hpp>


screen screen;

int main(int argc, char* argv[])
{
	conn con;
    if(argc < 3) {
        std::cout << argv[0] << " " << "[server] [port]" << std::endl;
        return -1;
    }
    else {
    	con.conecta(argv[1], argv[2]);
    }
}
