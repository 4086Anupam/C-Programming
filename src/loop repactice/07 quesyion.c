#include<stdio.h>
int main (){
  int i=0, sum=0;
  int num;
  printf ("Enter the number \n");
 scanf ("%d",&num);
    while (i<=num){
        if (i%2==0){
            printf ("the even number %d \n",i);

        sum=sum+i;}
        printf ("%d\n",sum);
        i++;
    }








    return 0;
}