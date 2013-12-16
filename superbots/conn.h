#ifndef _CONN_H_INCLUDED_
#define _CONN_H_INCLUDED_

#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <boost/asio.hpp>
#include <boost/thread/thread.hpp>

#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <boost/thread/mutex.hpp>

using boost::asio::ip::tcp;

class conn
{

public:
	conn();
	virtual ~conn();
	void send(tcp::socket &socket, const std::string & str);
	void conecta(std::string server, std::string port);
	void game_thread(std::shared_ptr<tcp::socket> socket, bool &gameover, bots & bots, bot::team_id &id,
	        boost::mutex & state_mutex, bot::field_size &field_width, bot::field_size &field_height,
	        int &win_width, int &win_height, bool &connected);
};
#endif
