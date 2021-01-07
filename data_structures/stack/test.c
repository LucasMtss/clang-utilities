//
// Created by Iago on 21/12/2020.
//
#include <stdio.h>
#include "stack.h"

int main(){
    Linked_List *users = new_array();
    printf("Array is empty? %d \n", array_is_empty(users));
    printf("Array length: %d \n", array_length(users));
    free_array(users);
}