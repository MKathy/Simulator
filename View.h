#ifndef VIEW_H
#define VIEW_H
#include "Game.h"
#include "Life.h"
#include "ProgramMode.h"

class View
{
    char last_action;
    Game *game;

    void display_life_stats();
    void display_main_menu();
    void display_life_menu();

public:
    View();
    void run_menu(ProgramMode);
    char get_last_action();
    void set_game(Game*);
    void clear_screen();
};
#endif
