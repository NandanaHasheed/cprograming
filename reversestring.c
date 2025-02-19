#include<stdio.h>
int main(){
char str[50],temp;
int j,len;
printf("Enter a string");
gets(str);
for(len=0;str[len]!='\0';len++);
int i=len-1;
for(j=0;j<len/2;j++){
temp=str[i];
str[i]=str[j];
str[j]=temp;
i--;
}
 printf("Reverse of the string \n %s",str);
 return 0;
}




