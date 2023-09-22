#include <stdio.h>
#include <stdlib.h>
#include "pilaArray.h"

void arreglo(int elem[]){
    for(int i=0; i<=cima; i++){
        printf("\n", elem[i]);
        }
}
void apila(int x){
    if(ntamao()==TAM){
        printf("No entran mas elementos\n");
    }else{
        cima++;
        elem[cima]=x;
    }
}
