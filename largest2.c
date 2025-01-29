#include<stdio.h>
int main(){
int number1,number2,number3;
printf("Enter number 1");
scanf("%d",&number1);
printf("Enter number 2");
scanf("%d",&number2);
printf("Enter number 3");
scanf("%d",&number3);
if(number1>number2){
 if(number1>number3){
 printf("%d is greater",number1);
 }
 else{
 printf("%d is greater",number3);
 }
 }
 else{
 if(number2>number3){
 printf("%d is greater",number2);
 }else{
  printf("%d is greater",number3);
  }
  return 0;
  }
  }
 

