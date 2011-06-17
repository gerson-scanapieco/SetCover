#include "../include/algorithm.h"

/* intersection of sets
 * subsets DEVEM estar ordenados!!
 * set1 e set2 são 2 vetores que representam 1 conjunto */
int  isec(SUBSET *s, int  set1[], int set2[],int *	intsec) 
{
	short int i=0,j=0,k=1;
	int cnt=0;
  for(;i<s->size_alphabet;i++)
		{
			if(k<=set1[0])
			 {
				if(s->alphabet[i]!=set1[k])
					++j;
				else
					++k;
			 }
			else
				j--;

			if(k<=set2[0])
			 {
				if(s->alphabet[i]!=set2[k])
					++j;	
				else
					++k;				
			 }
			else
				j--;

			if(j==2 || j==-2)
				intsec[++cnt]=s->alphabet[i];

			j=0;
		}
	intsec[0]=cnt;
/*	if(cnt>0)
	{
		aux=malloc(sizeof(int)*cnt);
		for(j=0;j<cnt;j++)
			aux[j]=intsec[j];
		free(intsec);
		intsec=aux;
		free(aux);
	}*/
	return cnt;
}



/*
void brute_force_sc(SUBSET *s)
{
	short int i,x,k,j;
	int **intsec;
	for(x=0;x<s->size_alphabet;++x)
	{
	 	for(i=x;i<s->size_alphabet;++i)
	   {
		  for(k=i;k<=x && k>0;++k)
			 {
				 if(k)
 				  isec(s->subsets[k],s->subsets[k+1],intsec);
				 isec(intsec,s->subsets[k+1],intsec);
			 }
			if(!x)

			for(j=i+1;j<=s->size_alphabet;++j)
			 {
		   	isec
			 }
		 }
  }

}

void greedy_sc(SUBSET *s){
    //TODO implementar algoritmo aproximado

} */
