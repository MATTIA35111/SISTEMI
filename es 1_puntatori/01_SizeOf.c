#include <stdio.h>

int main(void){
    int i;
    char c = 'c';
    int *pi;

    printf("ciao,48!\n");

    i = 10;

    printf("La variabile occupa %d byte\n",sizeof(i));
    printf("Il tipo char occupa %d byte in memoria\n",sizeof(char));
    printf("Il tipo di puntatore occupa %d byte in memoria\n",sizeof(int*));

    printf("L'indirizzo di i è %p e contiene %d\n",&i,i);
    printf("L'indirizzo di c è %p e contiene %c\n",&c,c);
    printf("L'indirizzo di pi è %p e contiene %p\n",&pi,pi);

    return 0;
}