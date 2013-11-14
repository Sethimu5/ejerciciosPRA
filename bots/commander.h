#ifndef _COMMANDER_H_INCLUDED_
#define _COMMANDER_H_INCLUDED_

#include <vector>

#include <SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "bots.h"
#include "bot.h"

class commander
{
public:

typedef std::pair<int,int> position;

void calculate_move(bot & the_bot, glColor3f color, direction dir){}    
};

#endif
