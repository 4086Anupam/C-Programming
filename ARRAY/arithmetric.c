#include<stdio.h>
int main (){
  int age =22;
  int *ptr =&age ;
  printf (" memory allocation = %d\n",ptr );
ptr++;
printf ("memory allocation = %d\n",ptr);
ptr--;
printf ("memory allocation = %d\n",ptr );
ptr;





}