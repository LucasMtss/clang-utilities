//
// Created by Iago Ferreira on 13/01/2021.
//

#include <stdio.h>
#include <locale.h>
#include "03.h"

int consult(FILE* archive){
    Employee employee;
    int id, position;
    printf("\nForneça a matrícula: ");
    scanf("%d", &id);
    position = search(archive, id);
    if(position != -1) {
        rewind(archive);
        fseek(archive, position * sizeof(employee), SEEK_SET);
        fread(&employee, sizeof(Employee), 1, archive);
        printf("\nId: %d\nName: %s\nWage: %.2f\n", employee.id, employee.name, employee.wage);
        return 1;
    }
    return 0;
}

int search(FILE* archive, int id){
    Employee employee;
    int position = 0;
    //Posicionando o file pointer no início do arquivo
    rewind(archive); // alternativa -> fseek(archive, 0, SEEK_SET);

    //Le do arquivo "archive", 1 registro do tamanho da estrutura "Employee" e guarda na variável "employee"
    while(fread(&employee, sizeof(Employee),1, archive) == 1){
        if (employee.id == id) {
            return position;
        }else
            position++;
    }
    return -1;
}
int signup(FILE* archive){
    Employee employee;
    int quit;
    do{

        printf("\nForneça a matrícula: ");
        scanf("%d", &employee.id);

        if(search(archive, employee.id) == -1){
            setbuf(stdin, NULL);
            printf("Forneça o nome do funcionário: ");
            fgets(employee.name, 100, stdin);
            setbuf(stdin, NULL);
            printf("Forneça o salário do funcionário: ");
            scanf("%f", &employee.wage);
            fseek(archive, 0, SEEK_END);
            fwrite(&employee, sizeof(Employee), 1, archive);
            return 1;
        }else{
            printf("Matrícula já cadastrada");
            return 0;
        }

        printf("Deseja sair?\n1- Sim 2-Não");
        scanf("%d", &quit);
    }while(quit != 1);
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    FILE* archive;
    int option;
    archive = fopen("employees.dat", "rb+");
    if(archive == NULL)
        archive = fopen("employees.dat", "wb+");
    if(archive != NULL){
        printf("1- Cadastro<br>\n2- Consulta\n3- Alterar\n4- Listar\n5- Sair\n");
        scanf("%d", &option);
        switch (option) {
            case 1:
                signup(archive);
                break;
            case 2:
                consult(archive);
                break;
        }
    }

}