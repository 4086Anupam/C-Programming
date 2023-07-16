#include<stdio.h>
int number(int a, int b);// Function prototype

// function call
int main (){
  int a,b;
  printf ("Enter the number \n");
  scanf ("%d %d",&a,&b);
  number(a,b);
  return 0;
}
int number(int a, int b){
    if (a>b){
        printf ("%d Grater then %d\n",a,b);
    }
    else {
        printf ("%d Not Grater then %d\n",a,b);
    }
    return 0;
}