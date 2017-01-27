//
// Created by andy on 27/01/17.
//

#include <stdio.h>

#include "area_of_triangle.h"


float areaOfTriangle(int b, int h) {
    float area;
    int base = b;
    int hypotenuse = h;

    printf("Base: %d\n", base);
    printf("Hypotenuse: %d\n", hypotenuse);

    area = (base * hypotenuse) / 2;

    return area;
}