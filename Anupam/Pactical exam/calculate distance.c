#include<stdio.h>
#include<math.h>
int main (){
    int x1,x2,y1,y2;
    int root;
    printf ("Enter the number :");
    scanf ("%d%d%d%d",&x2,&x1,&y2,&y1);
    root = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    printf("calculate the distance = %d\n",root);
    return 0;
}