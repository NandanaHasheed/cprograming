#include<stdio.h>
int main(){
int age1,age2,age3;
printf("Enter Ram's age ");
scanf("%d",&age1);
printf("Enter Shyam's");
scanf("%d",&age3);
printf("Enter Ajay's");
scanf("%d",&age3);
if(age1<age2){
if(age1<age3){
printf("%d Ram is younger",age1);
 }
else{
printf("%d Ajay is younger",age3);
 }
 }
 else{
  if(age2<age3){
    printf("%d Shyam is younger",age2);
 }else{
    printf("%d Ajay is younger",age3);
  }
  return 0;
  }
  }
 
