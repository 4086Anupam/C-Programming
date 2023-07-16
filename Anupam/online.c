#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    int marks[3];

};
int main()
{
    struct student s;
    int i;
    printf("enter roll no");
    scanf("%d",&s.roll);
    printf("enter name");
    scanf("%s",&s.name);
    printf("enter marks");
    for(i=0;i<3;i++)
    {
        scanf("%d",&s.marks[i]);
    }
    printf("roll no is %d \n",s.roll);
    printf("name  is %s \n ",s.name);
    for(i=0;i<3;i++) {
        printf(" mark is %d \n", s.marks[i]);
    }
    }