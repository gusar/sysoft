#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>}

int main()
{
    // Get current date instead of 1972
    time_t now = time(NULL);

    struct tm newyear;
    newyear = *localtime(&now);
    newyear.tm_hour = 14;
    newyear.tm_min = 5;
    newyear.tm_sec = 0;

    int seconds;
    seconds = difftime(now, mktime(&newyear));

    printf("%d", seconds);

    char* c_time_string = ctime(&now);
    printf("\nTime now: %s", c_time_string);

    return(0);
}
