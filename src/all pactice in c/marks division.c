#include<stdio.h>
int main (){
   int marks;
   printf ("Enter the marks\n");
   scanf ("%d",&marks);
if (marks>=90&&marks<=100){
    printf ("Great A");
}
 else if (marks>=79&&marks<=89) {
     printf ("Great B");
 }
else if(marks>=69&&marks<=78){
    printf("Great c");
}
else {
    printf ("fail");
}





    return 0;
}