#include<stdio.h>
int main()
{
  int a[3][3]={{1,7,9},{4,3,4},{7,4,9}};
  int b[3][3]={{3,8,7},{1,2,4},{1,5,1}}; 
  int sum[3][3],i,j;
  for (i=0;i3;i++)
 { 
for (j=0;j<3;j++)
 {
    sum[i][j]=a[i][j]+n[i][j];
 }
} 
 printf("Matrix C(A+B):\n");
for(i=0;i<3;j++)
{ 
printf("%d\t",sum[i][j]);
} 
printf("\n");
} 
return 0;
}