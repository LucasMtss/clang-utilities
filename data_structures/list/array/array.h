//
// Created by Iago on 21/12/2020.
//

#ifndef CLANG_UTILITIES_ARRAY_H
#define CLANG_UTILITIES_ARRAY_H

#define MAX 100

struct user{
    int id;
    char[256] name;
};

typedef struct _array Array;

void free_array(Array*);

int array_length(Array*);

int array_is_empty(Array*);

int array_insert_first(Array* array, struct user);

int array_insert_end(Array* array, struct user);

#endif //CLANG_UTILITIES_ARRAY_H