#include<stdio.h>
int main (){
int i,num,count = 0,no=1;
printf ("enter the number: \n");
scanf ("%d",&num);
for (i=1;i<=num;i++){

    printf ("%d\n",no+count);
no+=count;
    count++;
}





    return 0;
}