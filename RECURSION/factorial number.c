#include<stdio.h>
int fact (int num);// Function prototype
// Function call
int main (){
    int  num,anupam;
  printf ("Enter the number \n") ;
  scanf ("%d",&num);
  anupam=fact (num);
  printf ("%d\n",anupam);
  return 0;
}
// Function defination
int fact (int num){
    if (num==1){// base case
        return 1;
    }
    else {// recursive case
        return num*fact (num-1);
    }

}