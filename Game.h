#ifndef GAME_H
#define GAME_H
#include "Life.h"

class Game
{
    Life *life;
    int max_year;
    int max_happiness;
    int max_action;

    Game(Life *);
    void work();
    void study();
    bool fun();
    bool ask_for_promotion();

public:
    int get_year();
    int get_money();
    int get_intelligence();
    int get_happiness();
    int get_work_level();
    int get_action();
    int get_salary();
    Game * create_game();
};

#endif // GAME_H
