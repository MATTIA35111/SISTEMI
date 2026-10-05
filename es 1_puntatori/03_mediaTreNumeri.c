#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p1;
    int *p2;
    int *p3;
    float *media;


    p1 = (int*) malloc(sizeof(int));
    printf(inserisci un numero : );
    scanf("%d", p1);
    
    p2 = (int*) malloc(sizeof(int));
    printf(inserisci un numero : );
    scanf("%d", p2);

    p3 = (int*) malloc(sizeof(int));
    printf(inserisci un numero : );
    scanf("%d", p3);

    printf("n1: %d\nn2: %d\nn3: %d\n",*p1,*p2,*p3)
    *media = (*p1+*p2+*p3)/3;

    printf("La media dei valori è %f\n",*media)

    return 0;
}