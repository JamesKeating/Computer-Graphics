#include "clock.h"
#include <stdio.h>


Clock::Clock(){
    seconds = minutes = hours = 0;
}

void Clock::print(){
    printf("\n%d:%d:%d\n", hours, minutes, seconds);
}

void Clock::setTime(int secs, int mins, int hrs){
    seconds = secs;
    minutes = mins;
    hours = hrs;
}
