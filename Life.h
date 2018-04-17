#ifndef LIFE_H
#define LIFE_H

class Life
{
    int year, action, money, intelligence, happiness, salary, work_level;
public:
    Life(int=1, int=1, int=0, int=0, int=100, int=10, int=1);
    friend void create_life();
};
#endif // LIVE_H
