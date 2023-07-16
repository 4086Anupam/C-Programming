// copy the array of element to another array
#include<stdio.h>
int main (){
  int arr1[10] ,arr2[10] ;
   int i,num;
   printf ("The element stored in the array \n");
   scanf ("%d",&num);
   // input
   for (i=0;i<num;i++){
       printf ("Element = %d \n",i);
       scanf ("%d",&arr1[i]);
   }
   // copy the number
   for (i=0;i<num;i++) {
       arr2[i] = arr1[i];
   }
for (i=0;i<num;i++){
    printf ("First number = %d \n",arr1[i]);
}
for (i=0;i<num;i++){
    printf ("Second number = %d \n",arr2[i]);
}






    return 0;
}