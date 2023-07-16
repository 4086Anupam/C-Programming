#include<stdio.h>
int Gcd (int a,int b);
int main (){
    int a,b;
    printf ("Enter the number :");
    scanf("%d %d",&a,&b);
    Gcd(a,b);
    printf ("%d", Gcd(a,b));//2,4
    return 0;
}
int Gcd(int a, int b){
    if (b==0){
        return a;
    }
    else {
        return Gcd(b,a%b);
    }

}