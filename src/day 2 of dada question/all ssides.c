#include<stdio.h>
int main (){
int Basic salary,Gross salary,DA,HRA;
printf ("Enter the Basic salary");
scanf ("%d",&Basic salary);
if (Basic salary<=10000){
    HRA = 0.2*Basic salary;
    DA=0.8*Basic salary;


}
 else if (Basic salary <=20000){
        HRA =0.25*Basic salary;
        DA=0.9*Basic salary;


 }
  else {
      HRA=0.3*Basic salary;
      DA=0.95*Basic Salary;
  }











}