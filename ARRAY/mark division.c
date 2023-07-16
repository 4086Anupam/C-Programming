#include<stdio.h>
int main (){
 int marks [3] ,i ;
 int avrage,sum;
 // input

 for (i=0;i<3;i++){
 printf ("Enter the number \n");
 scanf ("%d",&marks [i]);}

 // output

 for (i=0;i<3;i++){
     sum=sum+marks[i];
 avrage=sum/3;}
 printf ("avragr=%d\n",marks [i]);








    return 0;
}