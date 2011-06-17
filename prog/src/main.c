#include "../include/main.h"

int main(int argc,char * argv[]){


    char end[3];
    FILE *report;
    SUBSET s;
    clock_t t1,t2;
    report = fopen("report.csv","w");
    scanf("%s",end);
    while(strcmp("fim",end)!=0){
        getSUBSET(&s);
        t1 = clock();
    //    brute_force_sc(&s);
        t2 = clock();
        //calcula o tempo total do forca bruta em ms
        float a = ((float) (t2-t1))/1000;
        t1 = clock();
   //     greedy_sc(&s);
        t2 = clock();
        float b = ((float) (t2-t1))/1000;
        fprintf(report,"%d,%d,%6.6f,%6.6f;\n",s.size_alphabet,s.qt_subsets,a,b);
        scanf("%s",end);
    }
    fclose(report);
    return 0;
}
