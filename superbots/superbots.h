#ifndef _SUPERBOTS_H_INCLUDED_
#define _SUPERBOTS_H_INCLUDED_

#include "bots/bots.h"


class superbots
{
public:

    superbots (bots & bots) : Mundo(bots)
    {
        Grupo = -1;
    };

    virtual ~superbots () {};

    void busqueda(int nivel);
    void ejecutar(unsigned int profundidad);
    inline void set_team(bot::team_id team) {
        Grupo = team;
    }

private:
    bots & Mundo;
    bot::team_id Grupo;
};

#endif
