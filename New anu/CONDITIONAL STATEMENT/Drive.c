#include<stdio.h>
int main (){
    int age;
    printf ("Enter age :\n");
    scanf ("%d",&age);
    if (age>=18){
        printf ("Drive \n");
    }
    else {
        printf ("Not Drive \n");
    }
    return 0;
}
