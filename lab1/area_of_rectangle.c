//
// Created by andy on 27/01/17.
//

#include "area_of_rectangle.h"
#include <stdio.h>


int areaOfRectangle(int s1, int s2) {
    int area;
    int side1 = s1;
    int side2 = s2;

    printf("Side 1: %d\n", side1);
    printf("Side 2: %d\n", side2);

    area = side1 * side2;

    printf("Area: %d\n", area);
    return 0;
}