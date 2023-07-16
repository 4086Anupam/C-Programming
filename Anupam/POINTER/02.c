#include<stdio.h>
int main (){
    int var =10;
    int * ptr = &var;
    printf ("%d\n",*ptr);
    printf ("%u\n",ptr);
    return 0;
}