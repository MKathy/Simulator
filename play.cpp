#ifndef play_hpp
#define play_hpp
#include <iostream>
#include "functions.h"
#include <cstdio>
#include <windows.h>

using namespace std;

void play()
{
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
}
#endif

