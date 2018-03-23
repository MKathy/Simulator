#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdio>

using namespace std;

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
        char choice;

        choice = getch();

        cout << endl;
        switch(choice)
        {
        case '1':
            system("cls");
            cout << "Year: 4/71" << "\t";
            cout << " Actions: 1/2" << "\t";
            cout << "Money: 53" << "\t";
            cout << "Intelligence: 13" << "\t";
            cout << "Happiness: 87" << endl;

            cout << endl << "1. Work";
            cout << endl << "2. Study";
            cout << endl << "3. Fun";
            cout << endl << "4. Ask for promotion";
            cout << endl << "Exit";
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

