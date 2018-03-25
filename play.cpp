#include <iostream>
#include "play.h"
#include <cstdio>
#include <windows.h>
#include <conio.h>

using namespace std;

void play()
{
    int year = 1;
    int money = 10;
    int intelligence = 20;
    int happiness = 100;
    int work_level = 1;
    char choice;


    for(;;)
    {
        int action = 1;
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
            cout << endl << "Work";
            break;
        case '2':
            cout << endl << "Study";
            break;
        case '3':
            cout << endl << "Fun";
            break;
        case '4':
            cout << endl << "Ask for promotion";
            break;
        case '5':
            exit(0);
        }
        Sleep(1000);
    }
}
