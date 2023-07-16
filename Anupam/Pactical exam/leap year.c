#include<stdio.h>
int main (){
    int year ;
    printf ("Enter the year :");
    scanf ("%d",&year );
    if (year%400==0&&year%100!=0||year%4==0){
        printf ("%d year is leap year \n",year );
    }
    else {
        printf ("%d year is not leap year \n",year );
    }
    return 0;
}