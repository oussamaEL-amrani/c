#include <stdio.h>
#include "p.h"
void saisitab(int t[] , int dim ){
    int i,j;
    for(i=0 ; i<dim ; i++){
        printf("[%d] = ",i);
        scanf("%d",&t[i]);
    }
}
void affiTab(int t[] , int dim){
    int i,j;
    for(i=0 ; i<dim ; i++)
        printf("%d\n",t[i]);
}