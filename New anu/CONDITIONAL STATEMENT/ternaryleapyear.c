#include<stdio.h>
int main (){
    int year;
    printf ("Enter year:\n");
    scanf ("%d",&year);
    (year%400==0&&year%100!=0||year%4==0)?printf ("Leap year\n"):printf ("Not leap year\n");
    return 0;
}