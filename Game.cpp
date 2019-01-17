#include <iostream>
#include "Game.h"

using namespace std;


Game::Game(Life *)
{

}

int Game::get_year()
{
    //return year;
    return 1;
}
int Game::get_money()
{
    //return money;
    return 1;
}
int Game::get_intelligence()
{
    //return intelligence;
    return 1;
}
int Game::get_happiness()
{
    //return happiness;
    return 1;
}
int Game::get_work_level()
{
    //return work_level;
    return 1;
}
int Game::get_action()
{
    //return action;
    return 1;
}
int Game::get_salary()
{
    //return salary;
    return 1;
}

void Game::work()
{
    /*
       money += salary * happiness/100;
       happiness = happiness - 2;
       action++;
    */
}
void Game::study()
{
    /*
       intelligence += 5 * happiness/100;
       happiness -= 2;
       action++;
    */
}
bool Game::fun()
{
    /*
       if (happiness == 100)
       {
           cout << endl << "Happiness can not exceed 100!";
           Sleep(1500);
           return false;
       }
       if(happiness <= 97)
       {
           happiness += 3;
           action++;
       }
       else
           happiness = 100;
       return true;
    */
    return 0;
}
bool Game::ask_for_promotion()
{
    /*
       if(intelligence >= 5 + pow(2,work_level))
       {
           cout << "You got promoted!";
           salary += 10;
           work_level++;
           return 1;
       }
       else
       {
           cout << endl << "Your intelligence is too low! You need to have IQ = " << 5 + pow(2,work_level);
           Sleep(2000);
           return 0;
       }
       */
    return 0;
}
Game * Game::create_game()
{
    return nullptr;
}
