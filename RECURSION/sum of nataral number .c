#include<stdio.h>
int sum (int num);// function prototype

// function call
int main (){
    int result , num;
printf ("Enter the number \n");
scanf ("%d",&num);
result = sum (num);
printf ("%d\n",result);
return 0;
}
// recursion defination
int sum(int num){
    if (num==1){// Base condition
        return 1;
    }
    else {// Recursive procedure
        return num + sum (num-1);
    }
}