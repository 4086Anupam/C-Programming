#include<stdio.h>
float rec(float a, float b);
float area(float x);
int main (){
    float a = 5.0;
    float b= 4.0;
    float x=3.0;
    printf("%f\n",rec (a,b));
printf ("%f\n", area(x));
    return 0;
}
float rec (float a, float b){
    return a*b;
}
float area (float x){
    return 3.14*x*x;
}