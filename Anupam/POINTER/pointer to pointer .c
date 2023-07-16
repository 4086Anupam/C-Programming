#include<stdio.h>
int main (){
    int var =56;
    int *ptr=&var;
    int **pptr= &ptr;
    printf ("%d",**pptr);
    return 0;
}