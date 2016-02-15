#ifndef ALARM_CLOCK_H
#define ALARM_CLOCK_H
#include "normal_clock.h"

class Alarm_Clock: public Normal_Clock
{
public:
    Alarm_Clock();
    int alarm_seconds, alarm_minutes, alarm_hours;
    void setAlarm(int a_sec, int a_min, int a_hr);
    void checkAlarm();
    void tick();
};

#endif // ALARM_CLOCK_H
