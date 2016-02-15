#include "reverse_clock.h"

void Reverse_Clock::tick(){
    if ((seconds -= 1) == -1){
      seconds = 59;
      if ((minutes -= 1) == -1){
        minutes = 59;
        if ((hours -= 1) == -1){
          hours = 23;
        }
      }
    }

    setTime(seconds, minutes, hours);
}
