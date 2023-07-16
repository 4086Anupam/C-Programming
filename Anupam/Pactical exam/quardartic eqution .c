#include<stdio.h>
#include<math.h>
int main (){
    float a,b,c,discreate;
    float root1,root2;
    printf ("Enter the number :");
    scanf ("%d %d %d",&a,&b,&c);
    discreate=b*b-4*a*c;
    if (discreate>0){
        root1=-b+ sqrt(b*b-4*a*c)/(2*a);
        root2=-b- sqrt(b*b-4*a*c)/(2*a);
        printf ("%f\n %f\n",root1,root2);
    }
    else if (discreate==0){
        root1=root2=-b/(2*a);
        printf ("root1=root2=%f",root1);
    }
    else {
        printf ("Both root are imaginary\n");}

    return 0;
}