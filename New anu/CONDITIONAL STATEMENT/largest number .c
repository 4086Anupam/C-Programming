#include<stdio.h>
int main (){
    int a,b,c;
    printf ("Enter number \n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b&&a>c){
        printf("A largest number %d",a);
    }
    else if (b>c&&b>a){
        printf ("B largest number %d",b);
    }
    else {
        printf ("C largest number %d",c);
    }
    return 0;
}