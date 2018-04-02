#include <iostream>
#include <conio.h>
#include <windows.h>
#include "main_menu.h"
#include "play.h"

using namespace std;

int main()
{
    for(;;)
    {
        display_main_menu();
        cout << "Your choice: ";
        char choice;

        choice = static_cast<char>(getch());

        cout << endl;
        switch(choice)
        {
        case '1':
            play();
            break;
        case '2':
            cout << "Leaderboard";
            break;
        case '3':
            cout << "Load Game";
            break;
        case '4':
            return 0;
        default:
            cout << "There is no option!" << endl;
            break;
        }
        getch();
        system("cls");
    }
    return 0;
}
