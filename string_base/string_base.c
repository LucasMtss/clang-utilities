//
// Created by iago on 12/12/2020.
//

#include "string_base.h"
#include <stdlib.h>

char* reverse_string(char* string) {
    int tail, nose = 0;
    char* reversed_string = (char*) malloc(sizeof(string));
    for(tail = strlen(string) - 1; i >= 0; i--){
        reversed_string[tail] = string[nose];
        tail++;
    }
    reversed_string[tail] = '\0';
    return reversed_string;
}