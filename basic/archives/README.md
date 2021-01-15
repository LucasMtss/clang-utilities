# Arquivos em C

### Como utilizar?

As funções, estruturas e constantes para manipulação de arquivos estão
dispostas dentro da biblioteca *stdio.h*.

FILE é o tipo definido para manipulação de arquivos
```c
FILE* archive
```
fopen é a função utilizada para abrir um arquivo
```c
    archive = fopen("01.c", "r");
```

fseek é a função utilizada para mover o fp (*file pointer*) dentro dos arquivos.
```c
fseek(archive, 0, SEEK_SET);
fseek(archive, 0, SEEK_CUR);
fseek(archive, 0, SEEK_SET);

```