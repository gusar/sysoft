//
// Created by andy on 10/02/17.
//


#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char *argv[] = {"echo", "Echo is running now....",NULL};
    execv("/bin/echo", argv);
    printf("Im the last thing in this program to output!!");

    return 0;
}
