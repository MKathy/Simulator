#include "functions.h"
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
    for(;;)
    {
        display_main_menu();
        cout << "Your choice: ";
        char choice;

        choice = getch();

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
            cout << "Save Game";
            break;
        case '4':
            exit(0);
            break;
        default:
            cout << "Nie ma takiej opcji w menu!" << endl;
            break;
        }
        choice = getch();
        if(choice == 0)
            choice = getch();
        system("cls");
    }
    return 0;
}
