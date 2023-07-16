#include<stdio.h>
int main (){
 int num;
 printf ("Enter the number \n");
 scanf ("%d",&num);
 if (num>0){
     printf (" %d positive \n",num);
 }
   else if (num<0) {
       printf (" %d negative \n ",num);
   }
   else{
       printf (" %d zero \n",num);
   }





    return 0;
}