#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main()
{
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
        
        while (1) 
        {
            sleep(1);
            // printf("Child 1: my parent is: %d\n", getppid());
        }
    }

    return(0);
}