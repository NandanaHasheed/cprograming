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
for(i=0;i<row;i=i+1){
 for(j=0;j<column;j=j+1){
 printf("%d\t",m1[j][i]);
 }
 printf("\n");
 }
 return 0;
 }
 
