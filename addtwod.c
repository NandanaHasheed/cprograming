#include<stdio.h>
int main(){
int i,j,row,column;
printf("Enter the row and columns");
scanf("%d%d",&row,&column);
int m1[row][column],m2[row][column],m3[row][column];
printf("Enter the first matrix");
for(i=0;i<row;i=i+1){
 for(j=0;j<column;j=j+1){
 scanf("%d",&m1[i][j]);
 }
}
printf("Enter the second matrix");
for(i=0;i<row;i=i+1){
 for(j=0;j<column;j=j+1){
 scanf("%d",&m2[i][j]);
 }
}
for(i=0;i<row;i=i+1){
 for(j=0;j<column;j=j+1){
   m3[i][j]=m1[i][j]+m2[i][j];
  }
}
for(i=0;i<row;i=i+1){
 for(j=0;j<column;j=j+1){
printf("%d \t",m3[i][j]);
}
printf("\n");
}
return 0;
}


 


