#include <stdio.h>
#include <stdlib.h>
#include "./point.h"

int main(){

    float distance;
    Point *a, *b;

    a = new_point(10,20);
    b = new_point(7,25);

    distance = get_distance(a, b);

    printf("The distance between points: %f \n", distance);

    free_point(a);
    free_point(b);

    return 0;
}