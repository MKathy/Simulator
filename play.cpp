#include <iostream>
#include "play.h"
#include <windows.h>
#include <conio.h>
#include <math.h>

using namespace std;

void play()
{
    int year = 1;
    int money = 0;
    int intelligence = 0;
    int happiness = 100;
    int work_level = 1;
    int choice;
    int action = 1;
    int salary = 10;

    for(;;)
    {
        system("cls");
        cout << "Year: " << year << "/75" << "\t";
        cout << " Actions: " << action << "/2" << "\t";
        cout << "Money: " << money << "\t";
        cout << "Intelligence: " << intelligence << "\t";
        cout << "Happiness: " << happiness << endl;

        cout << endl << "1. Work";
        cout << endl << "2. Study";
        cout << endl << "3. Fun";
        cout << endl << "4. Ask for promotion";
        cout << endl << "5. Exit";

        cout << endl << "Your choice: ";
        choice = getch();

        switch(choice)
        {
        case '1':
            money += salary * happiness/100;
            happiness = happiness - 2;
            action++;
            if(action>2)
            {
                action = 1;
                year++;
            }
            break;
        case '2':
            intelligence += 5 * happiness/100;
            happiness -= 2;
            action++;
            if(action>2)
            {
                action = 1;
                year++;
            }
            break;
        case '3':
            if (happiness < 100)
            {
                if (happiness <= 97) happiness += 3;
                else if (happiness <= 98) happiness += 2;
                else if (happiness <= 99) happiness += 1;

                action++;
                if(action>2)
                {
                    action = 1;
                    year++;
                }
            }
            else
            {
                cout << endl << "Happinness can not exceed 100!";
                Sleep(1500);
            }
            break;
        case '4':
            if(intelligence >= 5 + pow(2,work_level))
            {
                cout << "You got promoted!";
                salary += 10;
                work_level++;
            }
            else
            {
                cout << endl << "Your intelligence is too low! You need to have IQ = " << pow(2,work_level);
                Sleep(1500);
            }
            break;
        case '5':
            exit(0);
        default:
            cout << endl << "There is no option!" << endl;
            break;
        }
        Sleep(500);
    }
}
