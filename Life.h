#ifndef LIFE_H
#define LIFE_H

class Life
{
    int year, action, money, intelligence, happiness, salary, work_level;
    friend class Game;
public:
    Life();
    friend Life * create_life();
};
#endif // LIVE_H
