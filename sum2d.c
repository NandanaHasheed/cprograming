#include<stdio.h>
int main(){
int row,column,i,j;
printf("\n Enter the row and column");
scanf("%d%d",&row,&column);
int matrix[row][column];
printf("\n Enter the elements");
for(i=0;i<row;i=i+1){
 for(j=0;j<column;j=j+1){
  scanf("%d",&matrix[i][j]);
  }
}
for(i=0;i<row;i=i+1){
 for(j=0;j<column;j=j+1){
  if(i==j){
  matrix[i][j]=0;
  }
}
}
printf("\n The matrix is");
for(i=0;i<row;i=i+1){
 for(j=0;j<column;j=j+1){
 printf("%d",matrix[i][j]);
 }
 printf("\n");
 }
 return 0;
 }
 
