#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "area_of_circle.h"
#include "area_of_triangle.h"
#include "area_of_rectangle.h"


int main(int argc, char **argv) {

    float area;

    if (strcmp(argv[1], "Rectangle") == 0) {
        printf("Rectangle:\n");
        area = (float) areaOfRectangle(atoi(argv[2]), atoi(argv[3]));
    }

    else if (strcmp(argv[1], "Circle") == 0) {
        printf("Circle:\n");
        area = areaOfCircle(atoi(argv[2]));
    }

    else if (strcmp(argv[1], "Triangle") == 0) {
        printf("Triangle:\n");
        area = areaOfTriangle(atoi(argv[2]), atoi(argv[3]));
    }

    printf("Area: %f\n", area);

}