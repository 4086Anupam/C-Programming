#include<stdio.h>
int main (){
    int marks;
    printf ("Enter number :\n");
    scanf ("%d",&marks);
    if (marks>=80&&marks<=100){
        printf ("O grade\n");
    }
    else if (marks>=60&&marks<=79){
        printf ("E Grade\n");
    }
    else if (marks>=40&&marks<=59){
        printf ("A Grade \n");
    }
    else {
        printf ("Fail\n");
    }
    return 0;
}