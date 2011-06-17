#ifndef ALGORITHM_H_INCLUDED
#define ALGORITHM_H_INCLUDED

#include "generate_tad.h"

void brute_force_sc(SUBSET s);
void greedy_sc(SUBSET s);
int  isec(SUBSET *s, int  set1[], int set2[],int *	intsec);

#endif // ALGORITHM_H_INCLUDED
