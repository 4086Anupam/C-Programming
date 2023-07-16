#include<stdio.h>
int printyear(int year);
int main (){
    int year;
    printf ("Enter Year:\n");
    scanf ("%d",&year);
    printyear(year);
    return 0;
}
int printyear(int year){
    if (year%2==400&&year%100!=0||year%4==0){
        printf ("Leap year\n");
    }
    else {
        printf ("Not Leap year\n");
    }
    return 0;
}
