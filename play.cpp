#include <iostream>
#include "play.h"
#include <windows.h>
#include <conio.h>
#include <math.h>

using namespace std;

void play()
{
    int year = 1;
    int money = 10;
    int intelligence = 0;
    int happiness = 100;
    int work_level = 1;
    int choice;
    int to_promotion;


    for(;;)
    {
        int action = 1;
        while(action <= 2)
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

            to_promotion = 5 + pow(2,work_level);

            switch(choice)
            {
            case '1':
                money += (10 * money * happiness/100);
                happiness = happiness - 2;
                action++;
                break;
            case '2':
                intelligence += (5 * happiness/100);
                happiness = happiness - 2;

                if(intelligence >= (to_promotion))
                {
                    money += 10 * money;
                    work_level++;
                }
                action++;
                break;
            case '3':
                if (happiness <= 97)
                {
                    happiness += 3;
                    action++;
                }
                else cout << "Happinness can not exceed 100!";
                break;
            case '4':
                cout << endl << "Ask for promotion";
                cout << endl << "To promotion: " << to_promotion;
                break;
            case '5':
                exit(0);
            default:
                cout << endl << "There is no option!" << endl;
                break;
            }
            Sleep(2000);
        }
        year++;
    }
}
