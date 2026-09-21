#include <stdio.h>

int main(void){
    int v[] = {33, 44, 55};
    int i;
    int *pV;

    for(i=0; i<3; i++){
        printf("v[%d] = %d,%p\n",i,v[i],&v[i]);
        printf("Prima cella: %d con indirizzo %p\n",*v,v);
        printf("------------------------------------------------------------\n");
        pV = v;
        printf("prima cella: %d con indirizzo %p\n",*pV,pV);
    }

    return 0;
}