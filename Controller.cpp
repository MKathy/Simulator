#include <iostream>
#include "Controller.h"

using namespace std;

Controller::Controller(): mode(MAIN_MENU)
{

}
Controller::~Controller()
{

}
void Controller::run()
{
    view.run_menu(mode);
}
