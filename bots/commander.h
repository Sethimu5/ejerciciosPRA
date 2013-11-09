#ifndef _COMMANDER_H_INCLUDED_
#define _COMMANDER_H_INCLUDED_

#include <vector>

#include <SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "bots.h"
#include "bot.h"

enum direction { NOTHING, N, NE, E, SE, S, SW, W, NW };

class commander
{
public:

typedef std::pair<int,int> position;

direction calculate_move(bot & the_bot, auto color) const {
return direction;
}    
};

#endif
