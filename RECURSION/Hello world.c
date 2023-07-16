#include<stdio.h>
int  prinHw(int count );// function prototype
// function call
int main (){
   int count =5;
    prinHw(count );
    return 0;


}
// recursive function
int  prinHw(int count ){
if (count >=0){
    prinHw(count-1);
     printf ("Hello world \n");
return 0;
}
}