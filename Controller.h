#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "Model.h"
#include "View.h"
#include "ProgramMode.h"

class Controller
{
    Model model;
    View view;
    ProgramMode mode;
    int last_action;
    Life *life;
    Game *game;

public:
    Controller();
    ~Controller();
    void run();
};

#endif // CONTROLLER_H
