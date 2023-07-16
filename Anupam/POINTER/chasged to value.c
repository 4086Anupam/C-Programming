#include<stdio.h>
int main (){
    int var=10;
    int *ptr=&var;
 * ptr = 4;
 printf ("%d",*ptr);
 return 0;
}