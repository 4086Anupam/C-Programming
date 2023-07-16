#include<stdio.h>
int main (){
 float  celsius,fahrenheit;
    printf ("Enter the temp:");
    scanf ("%f",&celsius);
    if (celsius>273){
        printf ("\\033[1;31mImpossible\\n\\033[0m");
    }
    else {
        fahrenheit = (celsius * 9 / 5) + 32;
        printf ("%f \n", fahrenheit);
    }
    return 0;
}