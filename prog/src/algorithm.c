#include "../include/algorithm.h"

/* intersection of sets
 * subsets DEVEM estar ordenados!!
 * set1 e set2 são 2 vetores que representam 1 conjunto */
int * isec(SUBSET *s, int  set1[], int set2[]) 
{
	int *intsec,*aux;
	intsec=malloc(sizeof(int)*(set1[0]+set2[0]));
	short int i=0,j=0,k1=1,k2=1;
	int cnt=0;
  for(;i<s->size_alphabet;i++)
		{
			if(k1<=set1[0])
			 {
				if(s->alphabet[i]!=set1[k1])
					++j;
				else
					++k1;
			 }
			else
				j-=2;

			if(k2<=set2[0])
			 {
				if(s->alphabet[i]!=set2[k2])
					++j;	
				else
					++k2;				
			 }
			else
				j-=2;

			if(j!=2 && j!=-1 && j!=-4)
				intsec[++cnt]=s->alphabet[i];

			j=0;
		}
	intsec[0]=cnt;
	if(cnt>0)
	{
		aux=malloc(sizeof(int)*cnt);
		for(j=0;j<cnt;j++)
			aux[j]=intsec[j];
		free(intsec);
		intsec=aux;
	}
	return intsec;
}


// pelos contadores i,x e j recupera-se o grupo de conjuntos que gera a solução

int * brute_force_sc(SUBSET *s)
{
	short int i,x,k,j;
	int *intsec,*aux,tam,*set_cover;
	for(x=1;x<s->size_alphabet;++x)
	{
	 	for(i=0;i<s->size_alphabet;++i)
	   {
		  for(k=i;k<x + i -1 && x>1;++k)
			 {
				 if(k==i)
 				  intsec=isec(s,s->subsets[k],s->subsets[k+1]);
				 else
				  {
					 aux=intsec;
					 tam=intsec[0];
					 free(intsec);
					 aux[0]=tam;
					 intsec=isec(s,aux,s->subsets[k+1]);
			 	 }
			 }
			if(x==1)
			{
				intsec=malloc(sizeof(int)*(s->subsets[i][0]));
				for(k=0;k<s->subsets[i][0];k++)
					intsec[k]=s->subsets[i][k];
			}
			for(j=i+1;j<s->size_alphabet;++j)
			 {
		   	 aux=isec(s,intsec,s->subsets[j]);
				 if(aux[0]==s->size_alphabet)
				  {
						if(x==1)
						 {
							 set_cover=malloc(3*sizeof(int));
							 set_cover[0]=2;
							 set_cover[2]=i;
						 }
						else
						 {
              set_cover=malloc((x+2)*sizeof(int));
						  set_cover[0]=x+1;
						  for(k=0;k<x;k++)
							  set_cover[k+2]=i+k;
						  }
						set_cover[1]=j;
						return set_cover;
					}
				 free(aux);
			 }
			free(intsec);
		 }
  }

}
/*
void greedy_sc(SUBSET *s){
    //TODO implementar algoritmo aproximado

} */
