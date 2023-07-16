#include<stdio.h>
int main(){
 char ch;
printf ("Enter the character \n");
scanf ("%c",&ch);
if (ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
    printf ("%c alphabet ",ch);
}
 else if (ch>='0' &&ch<='9'){
     printf (" %c digit ",ch);
 }
   else {
       printf("special simboll",ch);
   }









    return 0;
}

