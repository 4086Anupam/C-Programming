#include<stdio.h>
float temp(float fahrenheit,float celsius );
int main (){
    float fahrenheit,celsius;
    printf ("Enter the farhenheight \n");
    scanf("%f",&fahrenheit);
    temp(fahrenheit,celsius);
    return 0;
}
float temp(float fahrenheit,float celsius){

    celsius = (fahrenheit - 32)*5/9;
    printf ("%f \n",celsius);
    return 0;
}

