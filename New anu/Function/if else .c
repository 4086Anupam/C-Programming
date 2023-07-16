#include<stdio.h>
int printodd();
int printEven();
int main (){
    int number ;
    printf ("Enter number :\n");
    scanf ("%d",&number);
    if (number %2==0){
        printEven();
    } else{
        printodd();
    }
    return 0;

}
int printodd(){
    printf ("odd number\n");
    return 0;
}
int printEven(){
    printf ("Even number\n");
    return 0;
}