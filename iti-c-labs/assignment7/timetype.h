#ifndef TIMETYPE_H
#define TIMETYPE_H
#include "stdlib.h"


typedef struct TimeType{
    int seconds;
    int minutes;
    int hours;
}TimeType;

TimeType TimeDifference(TimeType a, TimeType b){
    TimeType result;
    result.hours=abs(a.hours-b.hours);
    result.minutes=abs(a.minutes-b.minutes);
    result.seconds=(a.seconds-b.seconds);
    return result;
}

#endif // TIMETYPE_H
