#include<stdio.h>
float temp (float celsius,float farenheight);
int main (){
    float celsius , farenheight;
    printf ("Enter the celsius tempture \n");
    scanf ("%f",&celsius);
    temp (celsius ,farenheight );
    return 0;
}
float temp (float celsius,float farenheight){
    farenheight= (1.8 * celsius) + 32;
    printf ("%f",farenheight);
    return 0;
}
