#include "../include/generate_tad.h"

/*Esta funcao vai ler a entrada padrao e montar a estrutura de dados
utilzada para ambos algoritmos
    @status Testada e funcionando
*/
void getSUBSET(SUBSET *s){
    int alphabet_size;
    int item;
    int qt_subset;
    int size_subset;
    int i;
    int j;
    scanf("%d",&alphabet_size);
    s->alphabet = (int *) malloc(alphabet_size*sizeof(int));
    s->size_alphabet = alphabet_size;
    for(i=0;i<alphabet_size;i++){
        scanf("%d",&item);
        s->alphabet[i] = item;
    }
    scanf("%d",&qt_subset);
    s->subsets = (int **) malloc(qt_subset*sizeof(int *)); //define a qt de subconjuntos
    s->qt_subsets = qt_subset;
    for(i=0;i<qt_subset;i++){
        /*para cada um dos subconjuntos ele le primeiro o tamanho do subconjunto
          e logo apos o programa aloca o tamanho do subconjunto e preenche com os
          valores da entrada padrao*/
        scanf("%d",&size_subset);
        s->subsets[i] = (int *) malloc((size_subset+1)*sizeof(int));
        s->subsets[i][0] = size_subset; //grava o tamanho do subconjunto na primeira posicao
        for(j=1;j<=size_subset;j++){
            scanf("%d",&item);
            s->subsets[i][j] = item;
        }
    }
    
}


