#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <sys/stat.h>

int main()
{
    // Get current date instead of 1972
    time_t now = time(NULL);

    struct tm newyear;
    newyear = *localtime(&now);
    newyear.tm_hour = 16;
    newyear.tm_min = 05;
    newyear.tm_sec = 0;

    int seconds;
    seconds = difftime(mktime(&newyear), now);

    printf("%d", seconds);

    char* c_time_string = ctime(&now);
    printf("\nTime now: %s", c_time_string);

    int pid = fork();

    if (pid > 0)
    {
        printf("\nParent process");
        // sleep(10);
        exit(EXIT_SUCCESS);
    }
    else if (pid == 0)
    {

        // STEP 2
        if (setsid() < 0) { exit(1); }

        // STEP 3
        umask(0);

        // STEP 4
        if (chdir("/") < 0) { exit(EXIT_FAILURE); }

        // STEP 5
        int x;
        for (x = sysconf(_SC_OPEN_MAX); x >= 0; x--)
        {
            close(x);
        }

        // Daemon created sucessfully

        sleep(seconds);
        time(&now);
//        printf("\n%.f", seconds);

        char mode[] = "0777";
        char *path = "/home/andy/CLionProjects/sysoft/lab4/somefile";
        int i;
        i = strtol(mode, 0, 8);
        if (chmod (path, i) < 0) { }
    }

    return(0);
}
