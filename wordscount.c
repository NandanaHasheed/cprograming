#include<stdio.h>
int main(){
  int wordcount=0,linecount=0, charactercount=0;
  FILE *fp;
  fp=fopen("sample.txt","r");
  char ch;
  while(fscanf(fp,"%c",&ch)==1){
     if(ch==' '){
        wordcount++;
      }
      else if(ch=='.'){
        linecount++;
      }
      else{
        charactercount++;
      }
  }
    printf("Line count =%d",linecount);
    printf("Word count =%d",wordcount);
    printf("Character count =%d",charactercount+wordcount);
    fclose(fp);
    return 0;
}

