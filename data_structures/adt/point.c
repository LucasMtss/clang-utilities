//
// Created by Iago on 21/12/2020.
//
#include <stdlib.h>
#include <math.h>
#include "point.h"


struct point{
    float x;
    float y;
};

Point* new_point(float  x , float y){
    Point* point = (Point*) malloc(sizeof(Point));
    if(point != NULL){
        set_point(point, x, y);
    }
    return point;
};

void free_point(Point* point){
    free(point);
};

void get_point(Point* point, float* x, float* y){
    *x = point->x;
    *y = point->y;
};

void set_point(Point* point, const float x, const float y){
    point->x = x;
    point->y = y;
};

float get_distance(Point* a, Point* b){
    float distance_x = a->x - b->x;
    float distance_y = a->y - b->y;
    return sqrt(distance_x * distance_x + distance_y * distance_y);
};