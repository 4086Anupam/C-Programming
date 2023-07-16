#include<stdio.h>
#include<math.h>
    float anupam (float a,float b,float c);
    int main (){
        float a,b,c;
        scanf("%f %f %f",&a,&b,&c);
        anupam(a,b,c);
        return 0;

    }
float anupam (float a,float b,float c){
    float s,area;
    if (a+b>c&&b+c>a&&a+c>b){
       s=(a+b+c)/2;
       area = sqrt ((s *(s - a) *(s - b) *(s - c)));;
        printf ("Area of triangle %f",area);
    }
    else {
        printf ("Invalid triangle \n");
    }
    return 0;

}