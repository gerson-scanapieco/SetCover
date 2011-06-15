#ifndef GENERATE_TAD_H_INCLUDED
#define GENERATE_TAD_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>

/*
Tipo de entrada do sistema
Primeira linha da entrada padrão = Alfabeto do conjunto
Segunda linha = quantidade de subconjuntos
Linhas em diantes:
N a1 a2 a3 ... aN
*/
typedef struct {int size_alphabet; int qt_subsets; int *alphabet; int **subsets;} SUBSET;
SUBSET getSUBSET();

#endif // GENERATE_TAD_H_INCLUDED
