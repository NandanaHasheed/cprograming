#include<stdio.h>
int main(){
int i,n,givenno,position;
printf("Enter the no of elements");
scanf("%d",&n);
int numbers[n];
printf("\n Enter the %d elements",n);
for(i=0;i<n;i++){
scanf("%d",&numbers[i]);
}
printf("Enter a number to check");
scanf("%d",&givenno);
for(i=0;i<n;i++){
if(numbers[i]==givenno){
position=i+1;
printf("The index position of given no is %d",position);
}
else{
printf("The given number is not present");
}
return 0;
}
