//
// Created by andy on 27/01/17.
//

#include "area_of_circle.h"
#include <stdio.h>


float areaOfCircle(int r) {
    float area;
    int radius = r;

    printf("Radius: %d\n", radius);

    area = (float) (PI * radius * radius);

    return area;
}