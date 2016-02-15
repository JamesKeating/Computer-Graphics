#ifndef CLOCK_H
#define CLOCK_H


class Clock{

public:
    Clock();
    int seconds, minutes, hours;
    void print();
    void setTime(int secs, int mins, int hours);
    virtual void tick() = 0;
};

#endif // CLOCK_H
