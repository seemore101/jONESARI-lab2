#include <sys/time.h>
#include <stdio.h>

double elapsed_time(struct timeval* start_time, struct timeval* end_time){
    //TODO: return the difference between end_time and start_time.
    double result;
    double start;
    double end;
    start = (start_time->tv_sec) + start_time->tv_usec;
    end = (end_time->tv_sec) + end_time->tv_usec;
    result = (end - start);
    return 0.0;
}
