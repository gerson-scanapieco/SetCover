#include "../include/main.h"

int main(int argc,char * argv[]){

    /*Este programa recebe uma entrada para o problema e então
      executa os 2 algoritmos para a mesma entrada e calcula o tempo
      de execucao para os 2 algoritmos e entao escreve na saida padrao
      no formato html utilizando tabelas os resultados para os 2
      algoritmos, essas tabelas poderao ser utilizadas no trabalho
      bem como importadas no excel para geração de gráficos ou mesmo
      em outras ferramentas.

    */
    char end[3];
    FILE *report;
    clock_t t1,t2;
    report = fopen("report.csv","w");
    scanf("%s",end);
    while(strcmp("fim",end)!=0){
        SUBSET s = getSUBSET();
        t1 = clock();
        brute_force_sc(&s);
        t2 = clock();
        //calcula o tempo total do forca bruta em ms
        float a = ((float) (t2-t1))/1000;
        t1 = clock();
        greedy_sc(&s);
        t2 = clock();
        float b = ((float) (t2-t1))/1000;
        fprintf(report,"%d,%d,%6.6f,%6.6f;\n",s.size_alphabet,s.qt_subsets,a,b);
        scanf("%s",end);
    }
    fclose(report);
    return 0;
}
