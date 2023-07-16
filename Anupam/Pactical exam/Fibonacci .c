#include<stdio.h>
int main (){
    float centigaede , fareheight;
    printf ("Enter the number \n");
    scanf ("%f",&centigaede);
    fareheight=(centigaede * 9 / 5) + 32;
    printf ("%f",fareheight);
    return 0;
}