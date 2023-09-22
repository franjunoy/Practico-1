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
int desapila (){
    if (estavacia()==1){
        printf("No hay elementos en la pila\n");
    }else{
        cima=cima-1;
        return elem[cima+1];
    }
}
void vaciaPila(){
    cima=-1;
}

