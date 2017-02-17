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
    newyear.tm_min = 43;
    newyear.tm_sec = 0;

    int seconds;
    seconds = difftime(now, mktime(&newyear));

    printf("%d", seconds);

    char* c_time_string = ctime(&now);
    printf("\nTime now: %s", c_time_string);

    sleep(1);
    time($now);
//    seconds = difftime(now.mktime(&newyear));
    printf("\n%.f", seconds);

    char mode[] = "0777";
    char *path = "/home/andy/CLionProjects/sysoft/lab4/somefile";
    int i;
    i = strtol(mode, 0, 8);
    if (chmod (path, i) < 0) { }

    return(0);
}
