//
// Created by Iago Ferreira on 13/01/2021.
//

#include <stdio.h>
#include <locale.h>
#include "02.h"



int main (){
    setlocale(LC_ALL, "pt_BR");
    FILE *archive;
    int number, count;
    float salario;
    archive = fopen("data.dat", "r+");
    if(archive == NULL)
        archive = fopen("data.dat", "w+");
    if(archive != NULL) {
        for (count = 0; count < 2; count++) {
            printf("\nForneca um numero inteiro: ");
            scanf("%d", &number);
            printf("\nForneca um numero real: ");
            scanf("%f", &salario);
            fprintf(archive, "%d\n%.1f", number, salario);
        }
    }
    return 0;
}