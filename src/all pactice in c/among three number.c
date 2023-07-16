#include<stdio.h>
int main (){
  int num1,num2,num3;
  printf ("enter rhe number \n");
  scanf ("%d%d%d",&num1,&num2,&num3);
  if (num1>num2&&num1>num3){
      printf ("a is lagest numnber");
  }
    else if (num2>num3 && num2>num3){
        printf ("b is a largest number ");
    }
   else {
       printf ("c is a largest number ");
   }






    return 0;
}