//
// Created by Iago Ferreira on 12/01/2021.
//

#include "Department.h"
#include "..\Utils\Utils.h"
#include <stdio.h>

void createDepartment(Department* departments, int* limit){
    Department department;
    if(*limit < MAX_DEPARTMENT) {
        (*limit)++;
        department.id = *limit;
        readString(department.name, 20, "Digite o nome do departamento: ");
        departments[(*limit)] = department;
        setbuf(stdin, NULL);
        printf("Numero: %d\tNome: %s", department.id + 1,department.name);
        setbuf(stdin, NULL);

    }
}

void readDepartments(Department* departments, int lastPosition){
    if(lastPosition > -1){
        for ( int i = 0; i <= lastPosition; i++) {
            printf("\nNumero: %d\t\t", departments[i].id + 1);
            printf("Nome: %s\t\t\n", departments[i].name);
        }
    }
}