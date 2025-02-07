#include<stdio.h>
int main(){
int row,column,i,j;
printf("Enter the no of rows and columns");
scanf("%d %d",&row,&column);
int matrix [row][column];
printf("\n Enter the number of elements");
for(i=0;i<row;i=i+1){
 for(j=0;j<column;j=j+1){
  scanf("%d",&matrix[i][j]);
  }
}
for(i=0;i<row;i=i+1){
 for(j=0;j<column;j=j+1){
  printf("%d\t",matrix[i][j]);
  }
   printf("\n");
  }
  return 0;
}

  
