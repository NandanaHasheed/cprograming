#include<stdio.h>
#include<string.h>
int main(){
char str1[50],str2[50];
printf("Enter string 1 ");
gets(str1);
printf("Enter string 2");
gets(str2);
if(strcmp(str1,str2)==0){
printf("Strings are equal");
}
else{
printf("Strings are not equal");
}
return 0;
}

