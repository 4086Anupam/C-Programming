#include<stdio.h>
int anupam(int age);
int main (){
    int age;
    printf ("Enter age:\n");
    scanf ("%d",&age);
    anupam(age);
    return 0;
}
int anupam(int age){
    (age>=18) ? printf ("drive\n"): printf ("Not drive\n");
    return 0;
}