#include<stdio.h>
int main(){
 int year;
 printf ("Enter the number\n");
 scanf ("%d", &year);
 if (year%4==0&&year%100!=0||year%400==0)
 {
     printf ("this number is leap year\n");

 } else {
     printf("this number is not leap year\n");
 }











    return 0;
}