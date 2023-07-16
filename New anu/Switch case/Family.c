#include<stdio.h>
int main (){
    int name;
    printf ("Enter Name :\n");
    scanf ("%d",&name);
    switch (name){
        case 1:
            printf ("Anupam \n");
             break;
        case 2:
            printf ("Rita \n");
            break;
        case 3:
            printf ("Late Nitya\n");
            break;
        case 5:
            printf ("Sunil\n");
            break;
        case 6:
            printf ("Somnath\n");
            break;
        case 7 :
            printf ("Mamoni\n");
            break;
        case 8:
            printf ("Tanushree\n");
            break;
        case 9:
            printf ("Shyasree\n");
            break;
            default: printf ("Not family\n");
    }
    return 0;

}