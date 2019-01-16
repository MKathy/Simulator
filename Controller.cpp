#include <iostream>
#include <windows.h>
#include "Controller.h"

using namespace std;

Controller::Controller(): mode(MAIN_MENU)
{

}
Controller::~Controller()
{

}
void Controller::run()
{
    while(true)
    {
        view.clear_screen();
        view.run_menu(mode);

        switch(view.get_last_action())
        {
        case '1':
            cout << "Play" << endl;
            Sleep(1000);
            break;
        case '2':
            cout << "Leaderboard" << endl;
            Sleep(1000);
            break;
        case '3':
            cout << "Load Game" << endl;
            Sleep(1000);
            break;
        case '4':
            exit(0);
            break;
        default:
            cout << endl << "There is no such option in the menu.";
            Sleep(1000);
            break;
        }
    }
}
