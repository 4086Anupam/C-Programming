#include<stdio.h>
void calculateprint(float value);// Function prototype\
// function call;
int main (){
 float  value = 100.0;
    calculateprint(value);
printf ("%f\n",value );
    return 0;

}
// function  defination
void calculateprint(float value){

   value =value + (0.18 * value);
   printf ("%f\n",value );
}