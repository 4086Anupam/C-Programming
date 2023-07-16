#include<stdio.h>
int main(){
 int base,exponent ;
 long long result=1;
 printf("Enter the base \n");
 scanf ("%d",base);
 printf ("Enter the exponent \n");
 scanf ("%d",exponent);
  for (int i=1;i=exponent;i++){
      result *=base;
  }
   printf ("%d^%d=%11d\n",result,base,exponent) ;





    return 0;
}