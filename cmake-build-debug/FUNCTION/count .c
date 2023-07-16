#include<stdio.h>
int cou(int nun);
int main (){
    int num;
    printf ("Enter the number \n");
    scanf ("%d",&num);
    cou(num);
    return 0;
}
int cou(int num){
   int rem,digit,count=0, sum;
    while (num!=0) {
        num /= 10;
        count = count+sum;
    }
    printf ("%d\n",count);

}