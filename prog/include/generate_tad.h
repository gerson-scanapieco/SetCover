#ifndef GENERATE_TAD_H_INCLUDED
#define GENERATE_TAD_H_INCLUDED
#include<stdlib.h>

/*
Tipo de entrada do sistema
Primeira linha da entrada padrão = Alfabeto do conjunto
Segunda linha = quantidade de subconjuntos
Linhas em diantes:
N a1 a2 a3 ... aN
*/
typedef struct {int *alphabet; int **subsets;} SUBSET;
SUBSET getTAD();

#endif // GENERATE_TAD_H_INCLUDED
