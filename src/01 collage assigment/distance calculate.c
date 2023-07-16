#include<stdio.h>
#include<math.h>
int main(){
   double x1,y1,x2,y2;
   double root ;
   printf ("Enter the number \n");
   scanf ("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
   root =sqrt(pow((x2-x1),2)+pow((y2-y1),2));
printf("%.2lf",root);










    return 0;
}