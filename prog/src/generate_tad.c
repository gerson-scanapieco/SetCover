#include "../include/generate_tad.h"

/*Esta funcao vai ler a entrada padrão e montar a estrutura de dados
utilzada para ambos algoritmos*/
int **getTAD(){
    /*Philippe: Estou mexendo nesta funcao*/
    char c;
    int alphabet_size;
    scanf("%d",&alphabet_size);
    printf("Numero de itens no alfabeto = %d\n",alphabet_size);
    do{
        c = getchar();

        if(isAlphaNumeric(c)){
            //caso seja um valor valido
            printf("%c ",c);
        }
    }while(c!= '\n');
    return NULL;
}

/*Retorna positivo caso um char seja letra ou numero */
int isAlphaNumeric(char c){
    if((c>=65 && c<=90)||(c>=97 && c<=122)||(c>=48 && c<=57))
        return 1;
    return 0;
}
