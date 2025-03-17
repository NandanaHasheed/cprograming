/*
Author:Nandana Hasheed
Date:17th March 2025
Write a program to check whether a number is odd or even using functions*/
#include<stdio.h>
int iseven(int);
int main(){
int num,check;
printf("Enter a number");
scanf("%d",&num);
check=iseven(num);
if(check==1){
printf("%d is even",num);
}
else{
printf("%d is odd",num);
}
return 0;
}
int iseven(int num){
if(num%2==0){
return 1;
}
else{
return 0;
}
}
