#include<stdio.h>
int main(){
char istring[200];
int i;
int freq[26];
fgets(istring,sizeof(istring),stdin);
for(int i=0;istring[i]!='\0';i++){
char ch=istring[i];
if(istring[i]>='A'&&istring[i]<='Z'){
ch=ch+32;
}
if(ch>='a'&&ch<='z'){
freq[ch-97]++;
}
}
for(i=0;i<26;i++){
printf("%c,%d",i+97,freq[i]);
}
return 0;
}


