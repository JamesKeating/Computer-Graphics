#include "alarm_clock.h"
#include <iostream>

Alarm_Clock::Alarm_Clock(): Normal_Clock(){
alarm_seconds = alarm_minutes = alarm_hours = 0;
}

void Alarm_Clock::tick(){
    Normal_Clock::tick();
    checkAlarm();
}

void Alarm_Clock::setAlarm(int a_sec, int a_min, int a_hr){
    alarm_seconds = a_sec;
    alarm_minutes = a_min;
    alarm_hours = a_hr;
}

void Alarm_Clock::checkAlarm(){
    if (alarm_seconds == seconds && alarm_minutes == minutes && alarm_hours == hours){
        std::cout << "\nAlarm\n";
    }

}
