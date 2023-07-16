#include<stdio.h>

int main() {
    int num, digit, freq0, freq1, freq2, freq3, freq4, freq5, freq6, freq7, freq8, freq9;
    int i;
    printf("Enter the number \n");
    scanf("%d", &num);

    freq0=freq1=freq2=freq3=freq4=freq5=freq6=freq7=freq8=freq9=0;
    while (num != 0) {
        digit = num % 10;

        if (digit == 0) {

            freq0++;
        } else if (digit == 1) {

            freq1++;
        } else if (digit == 2) {

            freq2++;
        } else if (digit == 3) {
            freq3++;
        } else if (digit == 4) {

            freq4++;
        } else if (digit == 5) {
            freq5++;
        } else if (digit == 6) {
            freq6++;
        } else if (digit == 7) {

            freq7++;
        } else if (digit == 8) {

            freq8++;
        } else if (digit == 9) {

            freq9++;
        }
        num /= 10;


    }


    // Print the frequency of each digit
    printf("Frequency of each digit:\n");
    printf("0: %d\n", freq0);
    printf("1: %d\n", freq1);
    printf("2: %d\n", freq2);
    printf("3: %d\n", freq3);
    printf("4: %d\n", freq4);
    printf("5: %d\n", freq5);
    printf("6: %d\n", freq6);
    printf("7: %d\n", freq7);
    printf("8: %d\n", freq8);
    printf("9: %d\n", freq9);









    return 0;
}