#include<stdio.h>
int number ( int b );

int main (){
   int b;
   printf ("Enter the number\n ");
   scanf ("%d",&b);
    number(b);
    return 0;

}
int number( int b){
    int i;
    for (i=0;i<=b;i++){
        printf ("%d\n",i);
    }
    return 0;
}