#ifndef CONTROLER_H
#define CONTROLER_H
#include "Model.h"
#include "View.h"
#include "ProgramMode.h"

class Controler
{
    Model model;
    View view;
    ProgramMode mode;
    int last_action;
    Life *life;
    Game *game;

public:
    Controler();
    ~Controler();
    void run();
};

#endif // CONTROLER_H
