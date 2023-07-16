#include<stdio.h>
#include<math.h>
int anupam(int number);
int main (){
    int number;
    printf ("Enter number:\n");
    scanf ("%d",&number);
    anupam(number);
    return 0;
}
int anupam(int number){


   printf ("%f",pow(number,2));
   return 0;
}