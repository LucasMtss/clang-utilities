//
// Created by Iago on 21/12/2020.
//

#ifndef CLANG_UTILITIES_LIST_ARRAY_H
#define CLANG_UTILITIES_LIST_ARRAY_H

#define MAX 100

struct _type{
    int id;
};

typedef struct _array Array;

Array* new_array();

void free_array(Array*);

int array_length(Array*);

int array_is_empty(Array*);

int array_insert_first(Array* array, struct _type);

int array_insert_last(Array* array, struct _type);

int array_insert_ordered(Array* array, struct _type);

int array_remove_first(Array* array);

int array_remove_last(Array* array);

int array_remove_index(Array* array);

#endif //CLANG_UTILITIES_LIST_ARRAY_H
