//
// Created by Iago Ferreira on 12/01/2021.
//

#ifndef CONSULTER_DEPARTMENT_H
#define CONSULTER_DEPARTMENT_H

#define MAX_DEPARTMENT 20

/*Struct Departamento*/
typedef struct {
    int id;
    char name[20];
} Department;

void createDepartment(Department* , int *);
void readDepartments(Department* , int);
void updateDepartment(Department*);
void deleteDepartment(int);

#endif //TADFUNCIONARIO_DEPARTMENT_H
