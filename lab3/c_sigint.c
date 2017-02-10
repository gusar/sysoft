//
// Created by andy on 10/02/17.
//

#include <sys/types.h>
#include <sys/dir.h>
#include <sys/param.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>


void sig_handler(int sigNum)
{
    if (sigNum == SIGINT)
        printf("SIGINT Interrupt Received\n");
}


int main(void)
{
    if (signal(SIGINT, sig_handler) == SIG_ERR)
    {
        printf("\nSomething went wrong!!\n");
    }

    while(1)
    {
        sleep(1);
    }
}
