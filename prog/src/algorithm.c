#include "../include/algorithm.h"

/* intersection of sets 
 * subsets DEVEM estar ordenados!!
 * set1 e set2 são 2 vetores que representam 1 conjunto */
int  isec(SUBSET *s, int * set1, int *set2,int *	intsec) {
	short int i=0;
	int cnt=0;
  for(;i<s->size_alphabet;++i)		
		if(s->alphabet[i]!=set1[i])
			if(s->alphabet[i]!=set2[i])
				{
					intsec[i]=s->alphabet[i];	
					++cnt;
				}
	return cnt;	
}

void brute_force_sc(SUBSET *s){
		// checa o universo em relação aos 2 conj ordenados

}
void greedy_sc(SUBSET *s){
    //TODO implementar algoritmo aproximado

}
