//
// Created by Iago on 21/12/2020.
//
#include <stdlib.h>
#include "array.h"

struct _array{
    int length;
    struct _type data[MAX];
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

int array_insert_first(Array* array, struct _type t){
    if (array != NULL && !array_is_full(array)){
        int i;
        for(i = array->length - 1; i >= 0; i--)
            array->data[i+1] = array->data[i];
        array->data[0] = t;
        array->length++;
        return 1;
    }else return 0;
}

int array_insert_last(Array* array, struct _type t){
    if (array != NULL && !array_is_full(array)){
        array->data[array->length] = t;
        array->length++;
        return 1;
    } else return 0;
}

int array_insert_ordered(Array* array, struct _type t){
    if (array != NULL && !array_is_full(array)) {
        int i = 0, j;
        while (i < array->length && array->data[i].id < t.id)
            i++;
        for (j = array->length - 1; j >= i; j--)
            array->data[j + 1] = array->data[j];
        array->data[i] = t;
        array->length++;
        return 1;
    } else return 0;
}
int array_remove_first(Array* array) {
    if(array!= NULL && array->length != 0){
        int i = 0;
        for(i; i < array->length-1; i++){
            array->data[i] = array->data[i+1];
        }
        array->length--;
        return 1;
    }else return 0;
}
int array_remove_last(Array* array){
    if(array == NULL && array->length == 0) return 0;
    array->length--;
    return 1;
}

int array_remove_index(Array* array){

}