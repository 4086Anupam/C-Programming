#include<stdio.h>
int leap (int year);// parameter
int main (){
    int year ;
  printf("Enter the year\n");
  scanf ("%d",&year);
    leap  (year);//argument
    return 0;
}
int leap (int year){//parameter
    if (year%2==0&&year%2!=0||year%2==0){
        printf ("Leap year\n");
    }
    else {
        printf ("Not leap year \n");
    }
    return 0;
}