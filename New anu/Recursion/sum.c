#include<stdio.h>
int sum(int num);
int main (){
    int num,anu;
    printf ("Enter number :\n");
    scanf ("%d",&num);

    anu=sum(num);
    printf ("%d\n",anu);
    return 0;

}
int sum(int num){
    if (num==0)// Base case
        return 0;
    else
    {
      return  num+sum(num-1);
    }
}