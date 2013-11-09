#include "bots.h"
#include "bot.h"
#include <SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>

#include <vector>

enum direction { NOTHING, N, NE, E, SE, S, SW, W, NW };

int main()
{

  bot::position new_position(bot::position & actual_position, direction & new_direction){
  std:pair <int, int> new_pos;
    switch (_new_direction) {
    case (N): 
      new_pos.first =  _actual_position.first;
      new_pos.second = _actual_position.second + 1;
      break;
    case (S):
      new_pos.first =  _actual_position.first;
      new_pos.second = _actual_position.second - 1;
      break;
    case (E): 
      new_pos.first =  _actual_position.first + 1;
      new_pos.second = _actual_position.second;
      break;
    case (W):
      new_pos.first =  _actual_position.first - 1;
      new_pos.second = _actual_position.second;
      break;
    case (NE): 
      new_pos.first =  _actual_position.first + 1;
      new_pos.second = _actual_position.second + 1;
      break;
    case (NW):
      new_pos.first =  _actual_position.first - 1;
      new_pos.second = _actual_position.second + 1;
      break;
    case (SE): 
      new_pos.first =  _actual_position.first + 1;
      new_pos.second = _actual_position.second - 1;
      break;
    case (SW):
      new_pos.first =  _actual_position.first - 1;
      new_pos.second = _actual_position.second - 1;
      break;
    }
    return new_pos;
  }

  direction calculate_move(bot::bot & the_bot,auto & color)
  { 
    auto ndir;
    for_each(direction.begin(), direction.end(),std::bool bots::can_attack(& the_bot, & [this]) attack){
      if ((attack) && (color /= bots::find_at(& new_position(& the_bot.postition, & the_bot).get_team()))){
	return [this];
      }
      else{//almacenamos la dirección si es que nos podemos mover
	if (bots::can_move(& the_bot, & [this])){
	  ndir=_[this];
	}
      }
      //Si llega aquí es porque no ha encontrado un enemigo al que atacar en ninguna celda cercana.
      //Entonces tenemos varias opciones:      
      //Devolver NOTHING y no movernos y esperar a que algún otro bot se ponga a tiro. "BOT PASIVO"
      return direction::NOTHING;
      //Movernos en la primera dirección que encontremos que se pueda y buscar otros bot. "BOT ACTIVO"
      return ndir;
    }
  }
  return 0;
}
