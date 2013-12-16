#include "superbots.h"
#include "bots/bot.h"
#include <iostream>
#include <limits>

struct node {

    const bot::position & posicion_actual;
    const bots & Mundo;
    float peso;
    bot::direction direccion;
    int nivel;

    node(const bot::position& my_pos, const bots & current_bots, int depth = 0, float heuristic = std::numeric_limits<float>::lowest(), bot::direction best = bot::direction(0))
        : posicion_actual(my_pos), Mundo(current_bots), peso(heuristic), direccion(best), nivel(depth) {
        }

    void busqueda(unsigned int max_depth){
    	const bot *temp_bot = Mundo.find_at(posicion_actual);
    	direccion = bot::direction(temp_bot->get_team());
    }
};

void superbots::ejecutar(unsigned int profundidad) {
	Mundo.for_each_bot([this, &profundidad] (bot & my_bot) {
        node my_node(my_bot.get_position(), Mundo);
        my_node.busqueda(profundidad);
        my_bot.try_to_do(my_node.direccion);
    });
}

