#include<stdio.h>
void printHw(int num);
int  main (){
    int num;
    printf ("Print Hello World\n");
    scanf ("%d",&num);

    printHw(num);
    return 0;
}
void printHw (int num){
    if (num==0){
        return;
    }
    printf("Hello world \n");
  return   printHw(num-1);
}