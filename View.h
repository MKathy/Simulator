#ifndef VIEW_H
#define VIEW_H

class View
{
    int last_action;

public:
    View();
    void run_menu(int);
    void display_life_stats();
    void display_main_menu();
    void display_life_menu();
    void clear_screen();
    int get_last_action();
};
#endif;
