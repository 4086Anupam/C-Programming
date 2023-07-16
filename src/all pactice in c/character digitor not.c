#include<stdio.h>
int main (){
 char ch;
  printf ("Enter the character \n")  ;
  scanf ("%c",&ch);
  if (ch>='0'&& ch<='9'){
      printf ("%c is digit \n",ch);
  }
   else {
       printf ("%c is not digit \n",ch);
   }






    return 0;
}