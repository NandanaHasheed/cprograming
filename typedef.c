#include<stdio.h>
typedef struct{
int rollno;
char name[20];
float cgpa;
}student;
int main(){
student s[3];
for(int i=0;i<3;i++){
printf("\n Enter the roll number");
scanf("%d",&s[i].rollno);
printf("\n Enter the name");
scanf("%s",s[i].name);
printf("\n Enter the cgpa");
scanf("%f",&s[i].cgpa);
}
for(int i=0;i<3;i++){
printf("\n The student details");
printf("\n Name : \t %s",s[i].name);
printf("\n Roll no :\t %d ",s[i].rollno);
printf("\n cgpa: \t %f",s[i].cgpa);
}
return 0;
}

