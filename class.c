#include<stdio.h>
typedef struct{
int rollno,m1,m2,m3;
char name[20];
}class;
int main(){
int limit,total,average;
printf("Enter the number of students");
scanf("%d",&limit);
class c[limit];
for(int i=0;i<limit;i++){
printf("Enter the rollno");
scanf("%d",&c[i].rollno);
printf("Enter the student name");
scanf("%s",&c[i].name);
printf("Enter the mark of first subject");
scanf("%d",&c[i].m1);
printf("Enter the mark of second subject");
scanf("%d",&c[i].m2);
printf("Enter the mark of third subject");
scanf("%d",&c[i].m3);
}
for(int i=0;i<limit;i++){
total=c[i].m1+c[i].m2+c[i].m3;
average=total/limit;
}
printf("The total marks of students are: %d",total);
printf("The average mark of students are : %d",average);
return 0;
}

