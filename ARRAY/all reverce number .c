//Write a program in C to read n number of values in an array and display them in reverse order
#include<stdio.h>
int main (){
    int i,num,arr[10];
   printf ("Input the number element of store arry \n ");
    scanf ("%d",&num);
    printf ("Input %d number of elements in the arry \n",num);
    for (i=0;i<num;i++) {
        printf("Element - %d\n", i);
        scanf("%d", &arr[i]);
    }
printf ("The value store in the arry reverse number \n");
    for(i=num-1;i>=0;i--){
        printf ("%d\n",arr[i]);
    }

return 0;
}