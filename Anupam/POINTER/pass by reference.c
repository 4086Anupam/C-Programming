#include<stdio.h>
void fun (int* a,int* b ){
   * a=7;
   *b=5;
   printf ("%d\n %d\n",*a,*b);
   return ;
}
int main (){
    int a=5;
    int b=7;
    fun (&a,&b);
    printf ("%d\n %d\n",a,b);
    return 0;
}