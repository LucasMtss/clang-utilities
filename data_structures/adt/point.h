//
// Created by Iago on 21/12/2020.
//

#ifndef CLANG_UTILITIES_POINT_H
#define CLANG_UTILITIES_POINT_H

typedef struct point Point;

Point* new_point(float  x , float y);

void free_point(Point* point);

void get_point(Point* point, float* x, float* y);

void set_point(Point* point, const float x, const float y);

float get_distance(Point* a, Point* b);

#endif //CLANG_UTILITIES_POINT_H
