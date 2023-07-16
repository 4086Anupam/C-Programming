#include<stdio.h>

int main() {
    float GS, BS, HRA, DA;
    printf("enter the GS\n");
    scanf("%f", &BS);
    if (BS <= 10000) {
        HRA = BS * 0.2;
        DA = BS * 0.9;
        GS = BS + HRA + DA;
        printf("the gross salary%f", GS);
    } else if (BS >=10001&&BS<=20000) {
        HRA = BS * 2.5;
        DA = BS * 0.2;
        GS = BS + HRA + DA;
        printf("the gross salary is %f",GS);
    } else
    {
        HRA = BS * 0.3;
        DA = BS * 9.5;
        GS = BS + HRA + DA;
        printf("the gross salary %f",GS);
    }


    return 0;
}