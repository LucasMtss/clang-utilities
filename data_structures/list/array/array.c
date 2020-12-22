//
// Created by Iago on 21/12/2020.
//

#include "array.h"

struct _array{
    int length;
    struct user data[MAX];
};

Array* new_array(){
    Array* array;
    array = (Array*) malloc(sizeof(struct _array));
    if(array != NULL)
        array->length = 0;
    return array;
}

void free_array(Array* array){
    free(array);
}

int array_length(Array* array){
    return array == NULL ? -1 : array->length;
}

int array_is_empty(Array* array){
    return array == NULL ? -1 : array->length == 0;
}

int array_is_full(Array* array){
    if(array->length == MAX)
        return 1;
    return 0;
}

int array_insert_first(Array* array, struct user usr){
   array == NULL ? return 0;
   array_is_full(array) ? return 0;
   int i;
   for(i = array->length - 1; i >= 0; i--)
       array->data[i+1] = array->data[i];
   array->data[0] = usr;
   array->length++;
    return 1;
}

int array_insert_end(Array* array, struct user usr){
    if(array == NULL)
        return 0;
    if(array_is_full(array))
        return 0;
    array->data[array->length] = usr;
    array->length++;
    return 1;
}