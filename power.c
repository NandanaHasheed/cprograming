#include<stdio.h>
int mul(int n1,int n2){
if(n2==0){
  return 1;
}
else{
return n1 * mul(n1,n2-1);
}
}
int main(){
int n1,n2,result;
printf("Enter base");
scanf("%d",&n1);
printf("Enter exponent");
scanf("%d",&n2);
result=mul(n1,n2);
printf("The power of the number to the base %d and exponent %d is %d",n1,n2,result);
return 0;
}



