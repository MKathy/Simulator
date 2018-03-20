#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdio>

using namespace std;

char choice;

void play()
{

}
int main()
{
    for(;;)
    {
        cout << "--------------" << endl ;
        cout << "   Menu:" << endl ;
        cout << "--------------" << endl ;
        cout << "1. Play" << endl;
        cout << "2. Leaderboard" << endl;
        cout << "3. Save Game" << endl;
        cout << "4. Exit" << endl;

        cout << "Your choice: ";

        choice = getch();

        cout << endl;
        switch(choice)
        {
        case '1':
            system("cls");
            cout << "Year: 4/71\tActions: 1/2\tMoney: 53\tIntelligence: 13\tHappiness: 87" << endl;
            cout << "\n1. Work\n2. Study\n3. Fun\n4. Ask for promotion\n\n0. Exit" << endl;
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

