//
// Created by Iago Ferreira on 13/01/2021.
//

#include <stdio.h>
#include <locale.h>
#include "03.h"

int get_archive_length(FILE* archive){
    int count;
    fseek(archive, 0, SEEK_END);
    return ftell(archive);
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

void delete(FILE* archive){}

void update(FILE* archive){
    Employee employee;
    int id, position;
    printf("\nForneça a matrícula: ");
    scanf("%d", &id);
    position = search(archive, id);
    if(position != -1) {
        setbuf(stdin, NULL);
        printf("Forneça o nome do funcionário: ");
        fgets(employee.name, 100, stdin);
        setbuf(stdin, NULL);
        printf("Forneça o salário do funcionário: ");
        scanf("%f", &employee.wage);
        fseek(archive, 0, SEEK_END);
        fwrite(&employee, sizeof(Employee), 1, archive);
    }
}

void list(FILE* archive){
    Employee employee;
    //Posicionando o file pointer no início do arquivo
    rewind(archive); // alternativa -> fseek(archive, 0, SEEK_SET);

    //Le do arquivo "archive", 1 registro do tamanho da estrutura "Employee" e guarda na variável "employee"
    while(fread(&employee, sizeof(Employee),1, archive) == 1)
        printf("\nMatricula: %d\nNome: %s\nSalario: %.2f", employee.id, employee.name, employee.wage);
}

void read(FILE* archive){
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
    }
}

void create(FILE* archive){
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
        }else{
            printf("Matrícula já cadastrada");
            break;
        }
        printf("Deseja sair?\n1- Sim 2-Não");
        scanf("%d", &quit);
    }while(quit != 1);
}

int main() {
    setlocale(LC_ALL, "pt_br");
    FILE *archive;
    int option = 0;
    archive = fopen("employees.dat", "rb+");
    if (archive == NULL)
        archive = fopen("employees.dat", "wb+");
    if (archive != NULL) {
        do {
            printf("\n\n1- Cadastro<br>\n2- Consulta\n3- Alterar\n4- Listar\n5- Deletar\n0- Sair: ");
            scanf("%d", &option);
            switch (option) {
                case 1:
                    create(archive);
                    break;
                case 2:
                    read(archive);
                    break;
                case 3:
                    update(archive);
                    break;
                case 4:
                    list(archive);
                    break;
                case 5:
                    delete(archive);
                    break;
            }
        }while (option != 0);
    }
}