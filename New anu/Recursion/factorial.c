#include<stdio.h>
int factorial(int num){
    if(num==1)
        return 1;
    else {
        return num* factorial(num-1);
    }

}
int main (){
    int num,fact;
    printf ("Enter number :\n");
    scanf ("%d",&num);
  fact=  factorial(num);
    printf ("%d", fact);
    return 0;
}