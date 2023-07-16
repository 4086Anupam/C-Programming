#include<stdio.h>
int natarul (int num);
int main (){
    int num;
    printf("Enter the number : ") ;
    scanf ("%d",&num);
    natarul(num);
    return 0;


}
int natarul (int num){
    if (num==0){
        return 0;}
       natarul(num-1);
    printf ("%d\n",num);

    }
