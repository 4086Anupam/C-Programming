#include<stdio.h>
int main (){
    int Roll_No ,Physics,Chemistry , Computer_Application ;
    scanf ("%d %d %d %d",&Roll_No,&Physics,&Chemistry,&Computer_Application);
    int Total=Physics+Chemistry+Computer_Application;
    float Percentage=((Total/300))*100;
   printf ("Anupam\n");
    printf ("Roll_No : %d\n",Roll_No);
    printf ("Physics : %d\n",Physics);
    printf ("Chemistry : %d\n",Chemistry);
    printf ("Computer_Application: %d\n",Computer_Application);
    printf ("Total: %d\n",Total);
    printf ("Percentage: %.2f",Percentage);
    return 0;
}