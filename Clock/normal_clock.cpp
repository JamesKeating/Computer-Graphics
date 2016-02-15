#include "normal_clock.h"

void Normal_Clock::tick(){
    if ((seconds += 1) == 60){
      seconds = 0;
      if ((minutes += 1) == 60){
        minutes = 0;
        if ((hours += 1) == 24){
          hours = 0;
        }
      }
    }

    setTime(seconds, minutes, hours);
}
