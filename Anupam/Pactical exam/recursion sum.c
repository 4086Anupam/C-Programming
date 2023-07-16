#include<stdio.h>
int anupam(int a);
int main (){
    int a,sum;
    scanf("%d",&a);
    anupam(a);
    sum= anupam(a);
    printf ("%d",sum);
    return 0;

}
int anupam(int a){
    if (a==1){
        return 1;
    }
    else {
        return a+anupam(a-1);
    }
}