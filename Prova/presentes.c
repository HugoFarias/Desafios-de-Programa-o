#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int index_of(char** names, int tam, char name[]){
    for(int i = 0; i < tam; i++){
        if(strcmp(names[i], name) == 0) return i;
    }
    return -1;
}

int main(){
    int n, idC, in, pres, i, j, *saldo;
    char **names, cara[13];
    scanf("%d", &n);
    while(n!=0){
        names = (char**) malloc(sizeof(char)*n);
        for(i = 0; i < n; i++)
            names[i] = (char*) malloc(sizeof(char)*13);
        saldo = (int*) malloc(sizeof(int)*n);
        for(i = 0; i < n; i++){
            scanf("%s", names[i]);
            saldo[i] = 0;
        }
        for(i = 0; i < n; i++){
            scanf("%s", cara);
            idC = index_of(names, n, cara);
            scanf("%d", &in);
            scanf("%d", &pres);
            if(pres!=0 && idC >= 0) saldo[idC] -= (in/pres)*pres;
            for(j = 0; j < pres; j++){
                scanf("%s", cara);
                idC = index_of(names, n, cara);
                if(idC >= 0) saldo[idC] += in/pres;
            }
        }
        for(i=0; i < n; i++)
            printf("%s %d\n", names[i], saldo[i]);
        printf("\n");
        free(names);
        free(saldo);
        scanf("%d", &n);
    }
    return 0;
}
