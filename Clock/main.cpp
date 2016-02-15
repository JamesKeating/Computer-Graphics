#include "normal_clock.h"
#include "alarm_clock.h"
#include "reverse_clock.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace::std;

int main(int argc, char *argv[])
{
    string line;
    ifstream myfile ("clock.dat");
    Normal_Clock norm_clock;
    Alarm_Clock alarm_clock;
    Reverse_Clock rev_clock;
    int clock_data [6];

    for( int i= 0;getline (myfile,line); i++)
    {
        clock_data[i] = stoi(line);
    }

    norm_clock.setTime(clock_data[0], clock_data[1], clock_data[2]);
    alarm_clock.setTime(clock_data[0], clock_data[1], clock_data[2]);
    rev_clock.setTime(clock_data[0], clock_data[1], clock_data[2]);

    alarm_clock.setAlarm(clock_data[3], clock_data[4], clock_data[5]);

    norm_clock.print();
    alarm_clock.print();
    rev_clock.print();

    for(int i = 0; i < 100000; i++){
        norm_clock.tick();
        alarm_clock.tick();
        rev_clock.tick();
    }

    norm_clock.print();
    alarm_clock.print();
    rev_clock.print();
    return 0;
}
