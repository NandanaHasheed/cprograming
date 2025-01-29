#include<stdio.h>
int main(){
int number,i,factorial;
factorial=1;
printf("Enter number to find factorial");
scanf("%d",&number);
for(i=1;i<=number;i=i+1){
factorial=factorial*i;
}
printf("%d",factorial);

return 0;
}



