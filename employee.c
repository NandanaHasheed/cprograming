#include<stdio.h>
typedef struct{ 
char name[10];
int salary,id;
}employee;
int main(){ 
int limit;
printf("Enter the number of employees");
scanf("%d",&limit);
employee e[limit];
for(int i=0;i<limit;i++){
printf("Enter the id");
scanf("%d",&e[i].id);
printf("Enter the student name");
scanf("%s",&e[i].name);
printf("Enter the salary");
scanf("%d",&e[i].salary);
}
for(int i=0;i<limit;i++){
printf("\n The employee details");
printf("\n Name : %s",e[i].name);
printf("\n ID :%d ",e[i].id);
printf("\n salary:  %d",e[i].salary);
}
return 0;
}

