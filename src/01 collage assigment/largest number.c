#include<stdio.h>
int main (){
 int a,b,c;
 printf ("the enter number\n");
 scanf ("%d%d%d", &a,&b,&c);
 if (a>=b&&a>=c){
     printf("%d is largest number a ",a);
 }
 else if (b>=c&&b>=a){
     printf ("%d is largest number b",b);
 }
    else if  (c>=a&&c>=b) {
        printf("%d is largest number c",c);
    }
else {
    printf ("this is no largest number");
}










    return 0;
}