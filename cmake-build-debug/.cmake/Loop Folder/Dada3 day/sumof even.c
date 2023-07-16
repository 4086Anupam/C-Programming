#include<stdio.h>
int main (){
  int num,sum=0;
  int i=1;
  scanf ("%d",&num);
  while (i<=num){
      if (i%2==0){
          sum=sum+i;


      }
      i++;
  }
    printf ("even number ",sum,num);



    return 0;
}