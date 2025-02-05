#include<stdio.h>
int main(){
int i,n,largest,smallest;
printf("Enter the no of elements");
scanf("%d",&n);
int numbers[n];
printf("\n Enter the %d elements",n);
for(i=0;i<n;i++){
scanf("%d",&numbers[i]);
}
largest=numbers[0];
smallest=numbers[0];
for(i=1;i<n;i++){
if(numbers[i]>largest)
{
largest=numbers[i];
}
if(numbers[i]<smallest){
smallest=numbers[i];
}
}
printf("The largest number is %d",largest);
printf("The smallest number is %d",smallest);
return 0;
}

