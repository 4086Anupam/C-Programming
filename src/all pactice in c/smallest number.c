#include<stdio.h>
int main (){
int num1,num2,num3;
 printf ("Enter the number \n ");
 scanf ("%d%d%d",&num1,&num2,&num3);
  if (num1<=num2&&num1<=3) {
      printf ("a is smallest \n");
  }
    else if (num2<=num1&&num2<=num3){
        printf ("b is smallest \n");
    }
   else {
       printf ("c is smallest number \n");
   }


    return 0;
}
