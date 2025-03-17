/*
Author:Nandana Hasheed
date:17th March 2025
write a program to muliply 2 numbers using functions*/
#include<stdio.h>
void multiply(int,int);
int main(){
 int num1,num2;
 printf("Enter the first number");
 scanf("%d",&num1);
 printf("Enter the second number");
 scanf("%d",&num2);
 multiply(num1,num2);
return 0;
}
 void multiply(int num1,int num2){
 int product=num1*num2;
 printf("The product of the given number is %d and %d is %d",num1,num2,product);
}




