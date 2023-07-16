#include<stdio.h>
int main (){
int num,i=1;
printf ("Enter the number \n") ;
scanf ("%d",&num);
while (num!=0){
    i=i*num;
num--;
}
printf ("%d",i);





    return 0;
}