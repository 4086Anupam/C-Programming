#include<stdio.h>
int main(){
  int marks;
  printf ("enter the marks\n");
  scanf ("%d",&marks);
  if (marks>=90&&marks<=99){
      printf ("great o");
  }
else if(marks>=79&&marks<=89){
    printf ("great E");
}
else if (marks>=65&&marks<=78){
    printf ("great A");
}
else if (marks>=45&&marks<=64){
    printf ("great B");
}
else {
    printf("fail");
}





    return 0;
}