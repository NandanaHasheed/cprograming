#include<stdio.h>
int main(){
int row,column,i,j;
printf("\n Enter the no of row and column");
scanf("%d%d",&row,&column);
int matrix[row][column];
printf("Enter the elements");
for(i=0;i<row;i=i+1){
 for(j=0;j<column;j=j+1){
  scanf("%d",&matrix[i][j]);
  }
}
int sum=0;
for(i=0;i<row;i=i+1){
 for(j=0;j<column;j=j+1){
  if(i==j){
   sum=sum+matrix[i][j];
   }
  }
}
printf("The matrix is \n ");
for(i=0;i<row;i=i+1){
 for(j=0;j<column;j=j+1){
  printf("%d",matrix[i][j]);
  }
printf("\n");
}
printf("%d",sum);
return 0;
}

