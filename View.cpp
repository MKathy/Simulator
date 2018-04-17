#include <iostream>
#include <windows.h>
#include "View.h"

using namespace std;
View::View()
{

}
void View::run_menu(int n)
{
    switch(n)
    {
    case 1:
        display_main_menu();
        break;
    case 2:
        display_life_menu();
        break;
    }
    cout << "Your choice: ";
    int choice;
    cin >> choice;
    last_action = choice;
}
void View::display_life_stats()
{
    /*  cout << "Year: " << year << "/75" << "\t";
        cout << "Actions: " << action << "/2" << "\t";
        cout << "Money: " << money << "\t";
        cout << "Intelligence: " << intelligence << "\t";
        cout << "Happiness: " << happiness << endl;
        */
}
void View::display_main_menu()
{
    cout << "--------------" << endl ;
    cout << "   Menu:" << endl ;
    cout << "--------------" << endl ;
    cout << "1. Play" << endl;
    cout << "2. Leaderboard" << endl;
    cout << "3. Load Game" << endl;
    cout << "4. Exit" << endl;
}
void View::display_life_menu()
{
    cout << endl << "1. Work";
    cout << endl << "2. Study";
    cout << endl << "3. Fun";
    cout << endl << "4. Ask for promotion";
    cout << endl << "5. Exit";
}
void View::clear_screen()
{
    system("cls");
}

int View::get_last_action()
{
    return last_action;
}

/*
void View::set_game(*game)
{

}
*/
