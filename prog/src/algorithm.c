#include "../include/algorithm.h"

/* intersection of sets 
 * subsets DEVEM estar ordenados!!
 * set1 e set2 são 2 ints que relacionam a posição dos conjuntos no universo */
void  isec(SUBSET *s, int set1, int set2,int *	intsec) {
	short int i=0;
  for(;i<s->size_alphabet;++i)		
		if(s->alphabet[i]!=s->subsets[set1][i])
			if(s->alphabet[i]!=s->subsets[set2][i])
				intsec[i]=s->alphabet[i];		
}

void brute_force_sc(SUBSET *s){
		// checa o universo em relação aos 2 conj ordenados

}
void greedy_sc(SUBSET *s){
    //TODO implementar algoritmo aproximado

}
