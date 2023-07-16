#include <stdio.h>
int main() {
    float basicsalary, hra, da, grosssalary;
    printf("Enter the basic salary\n ");
    scanf("%f", &basicsalary);
    if (basicsalary <= 10000) {
        hra = 0.2 * basicsalary;
        da = 0.8 * basicsalary;
    } else if (basicsalary <= 20000) {
        hra = 0.25 * basicsalary;
        da = 0.9 * basicsalary;
    } else {
        hra = 0.3 * basicsalary;
        da = 0.95 * basicsalary;
    }
    grosssalary = basicsalary + hra + da;
    printf("Basic salary %.2f\n", basicsalary);
    printf("HRA %.2f\n", hra);
    printf("DA %.2f\n", da);
    printf("Gross salary %.2f\n", grosssalary);
    return 0;
}


