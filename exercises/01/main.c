#include <stdio.h>
#include <stdlib.h>
#include "Employee/Employee.h"
#include "Department/Department.h"
#define MAX 10

int main(){
    Department departments[MAX_DEPARTMENT];
    int option = 0, lastPosition=-1;

    do{
        printf("\n1-Cadastrar departamento\n2-Consultar departamento\n3-Sair: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                createDepartment(departments, &lastPosition);
                break;
            case 2:
                readDepartments(departments, lastPosition);
                break;
        }
        printf("\n\n\n");
    }while(option!=3);
    return 0;
}
