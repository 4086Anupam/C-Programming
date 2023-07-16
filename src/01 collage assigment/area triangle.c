#include<stdio.h>
#include<math.h>
int main(){
 float a,b,c;
 float s ;
 float area ;
 printf ("Enter this number \n");
 scanf("%f%f%f", &a, &b,&c);
 if (a+b>c&&b+c>a&&c+a>b){
  float s = (a+b+c)/2;
  float area = sqrt(s*(s-a)*(s-b)*(s-c));
      printf ("the area of triangle %f ",area);
  }
else  {
    printf ("the area is invalid ");
}











    return 0;
}