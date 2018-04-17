#ifndef VIEW_H
#define VIEW_H

class View
{
    int last_action;
    //Game *game;

    void display_life_stats();
    void display_main_menu();
    void display_life_menu();
    void clear_screen();

public:
    View();
    void run_menu(int);
    int get_last_action();
//  void set_game(*game);
};
#endif;
