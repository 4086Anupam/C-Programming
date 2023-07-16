#include<stdio.h>
void Namaste();
void Hello();
int main(){
    char ch;
    printf ("Enter the chracter \n");
    scanf ("%c",&ch);
   if (ch=='i'){
       Namaste();}
   else{
       Hello();
   }
return 0;
 }
 void Namaste(){
    printf ("Namaste\n");
}
void Hello(){
    printf ("Hello\n");
}