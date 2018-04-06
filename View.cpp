#include <iostream>
#include <windows.h>
#include "View.h"

using namespace std;

int year = 1;
int money = 0;
int intelligence = 0;
int happiness = 100;
int work_level = 1;
int choice;
int action = 1;
int salary = 10;

View::View()
{

}
void run_menu(int)
{

}
void View::display_life_stats()
{
    cout << "Year: " << year << "/75" << "\t";
    cout << " Actions: " << action << "/2" << "\t";
    cout << "Money: " << money << "\t";
    cout << "Intelligence: " << intelligence << "\t";
    cout << "Happiness: " << happiness << endl;
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
