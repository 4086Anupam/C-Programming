#include<stdio.h>
int main (){
    char ch='A';
    printf ("Enter the alphabet:");

   while (ch<='Z') {

       printf("%c=%d\n", ch,ch);
       ch++;
   }
    return 0;
}