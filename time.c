#include <sys/time.h>
#include <stdio.h>

double elapsed_time(struct timeval* start_time, struct timeval* end_time){
    //TODO: return the difference between end_time and start_time.
  double elapsed_microseconds = (end_time->tv_sec - start_time->tv_sec) * 1000000.0 +
                                  (end_time->tv_usec - start_time->tv_usec);

    double elapsed_seconds = elapsed_microseconds / 1000000.0;

    return elapsed_seconds;
}
