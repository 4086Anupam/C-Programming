#include<stdio.h>
float anupam(float a, float b);
int main (){
  float a,b;
  printf ("Enter the number \n");
  scanf ("%f %f",&a,&b);
  anupam(a,b);
    return 0;

}
float anupam(float  a, float b){
   float c;
    c = a * b;
    printf ("%f\n",c);
    return 0;
}