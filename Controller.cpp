#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>
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
            this_thread::sleep_for(chrono::milliseconds(1000));
            break;
        case '2':
            cout << "Leaderboard" << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            break;
        case '3':
            cout << "Load Game" << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            break;
        case '4':
            exit(0);
            break;
        default:
            cout << endl << "There is no such option in the menu.";
            this_thread::sleep_for(chrono::milliseconds(1000));
            break;
        }
    }
}
