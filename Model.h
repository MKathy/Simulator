#ifndef MODEL_H
#define MODEL_H

#include "Game.h"

class Model
{
    Life *life = nullptr;
    Game *game = nullptr;
public:
    Model();
    ~Model();
    Life * create_life();
    Game * create_game();
};

#endif // MODEL_H
