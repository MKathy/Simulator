#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdio>

using namespace std;

char choice;

int main()
{
for(;;)
{
    cout << "--------------" << endl ;
    cout << "   Menu:" << endl ;
    cout << "--------------" << endl ;
    cout << "1. Play" << endl;
    cout << "2. Leaderboard" << endl;
    cout << "3. Game save" << endl;
    cout << "4. Exit" << endl;

    cout << "Your choice: ";

    choice = getch();

    cout << endl;
    switch(choice)
    {
        case '1':
            cout << "Play"; break;
        case '2':
            cout << "Leaderboard"; break;
        case '3':
            cout << "Game over"; break;
        case '4':
            exit(0);

             break;

        default:
            cout << "Nie ma takiej opcji w menu!" << endl;
            break;

        }
        getchar();
        getchar();
        system("cls");
}
    return 0;
}

