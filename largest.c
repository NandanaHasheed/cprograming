#include<stdio.h>
int main(){
int number1,number2,number3;
printf("Enter number1");
scanf("%d",&number1);
printf("Enter number2");
scanf("%d",&number2);
printf("Enter number3");
scanf("%d",&number3);
if(number1>number2 && number1>number3){
printf("Number 1 is the largest");
}
else if(number2>number1 && number2>number3){
printf("Number 2 is the largest");
}
else{
printf("Number 3 is the largest");
}
 return 0;
}



