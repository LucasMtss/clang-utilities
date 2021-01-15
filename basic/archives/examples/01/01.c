//
// Created by Iago Ferreira on 13/01/2021.
//

#include <stdio.h>
#include "01.h"

int main(){
    FILE* archive;
    int charactere, count = 0;
    archive = fopen("01.c", "r");
    if(archive != NULL){
        while((charactere = getc(archive)) != EOF)
            if(charactere == " ")
                count++;
        printf("\nQuantidade de espaços em branco = %d ", count);
    }else{
        printf("\nErro na abertura do arquivo.");
    }



    return 0;
}