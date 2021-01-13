//
// Created by Iago Ferreira on 12/01/2021.
//

#include "Utils.h"
#include <string.h>

void cleanString(char* ref) {
    int i = 0;
    while(ref[i] != '\n')
        i++;
    ref[i] = '\0';
}

void readString(char* ref, int length, const char message[]){
    printf("%s", message);
    setbuf(stdin, NULL);
    fgets(ref, length, stdin);
    setbuf(stdin, NULL);
    cleanString(ref);
}


