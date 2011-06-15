#include "../include/main.h";

int main(int argc,char * argv[]){

    int i,j;
    SUBSET s = getSUBSET();
    printf("Tamanho do alfabeto = %d\n",s.size_alphabet);
    printf("Numero de Subconjuntos = %d\n",s.qt_subsets);

    for(i=0;i<s.qt_subsets;i++){
        for(j=1;j<=s.subsets[i][0];j++){
            printf("%d ",s.subsets[i][j]);
        }
        printf("\n");
    }
    return 0;
}
