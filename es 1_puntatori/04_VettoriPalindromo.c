#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    
    int *pV;
    int *Dim;
    srand(time(0));

    dim = (int*) malloc(sizeof(int));
    printf("inserisci dimensione array : ");
    scanf("%d",dim);

    pV = (*int) malloc(sizeof(int) * dim);

    caricaVett(int *v,dim);
    stampaVett(int *v);    

    if(controllaPalindromo(pV,dim) == 0){
        printf("PALINDROMO");
    }else{
        printf("NON PALINDROMO");
    }

    return 0;
}

void controllaPalindromo(int *pV,int *Dim){
    int *palindromo = (int*) malloc(sizeof(int));
    int *i = (*int) malloc(sizeof(int));
    *i = 0;
    *palindromo = 0;
}

void caricaVett(int *v,dim){
    int *i = (int*) malloc(sizeof(int));
    for(*i = 0; *i < dim;*i++){
        *(v+*i) = 1 + rand()%10;
    }
}

void stampaVett(){
    int *i = (int*) malloc(sizeof(int));
    for(*i = 0; *i < dim;*i++){
        printf("v[%d]: %d\n");
    }
}