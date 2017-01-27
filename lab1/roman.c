//
// Created by andy on 27/01/17.
//

#include <stdio.h>
#include <string.h>
#include "roman.h"


char * intToRoman(int n) {
    int intNumber = n;
    static int decimals[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    static char* romans[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    char roman[] = "";

    int arraySize = 12;

    int i = arraySize;
    for (i; i >= 0; i--) {

        if (intNumber >= decimals[i]) {
            strcat(roman, romans[i]);
            intNumber -= decimals[i];
        }

    }
    printf("%s", roman);
    return roman;
}