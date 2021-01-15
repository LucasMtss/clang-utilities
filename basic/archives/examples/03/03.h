//
// Created by Iago Ferreira on 13/01/2021.
//

#ifndef EXAMPLES_03_H
#define EXAMPLES_03_H

typedef struct {
    int id; // identificação/matrícula do funcionário
    char name[100]; // nome do funcionário
    float wage; // salário do funcionário
}Employee;

int main();

/*
 * Retorna
 * */
void create(FILE*);

/*
 * Retorna
 * */
void read(FILE*);

/*
 * Retorna
 * */
void update(FILE*);

/*
 * Retorna
 * */
void list(FILE*);

/*
 * Retorna
 * */
void delete(FILE*);

/*
 * Retorna o index do registro ou -1 se não existir funcionário com a matrícula fornecida.
 * */
int search(FILE*, int);
#endif //EXAMPLES_03_H
