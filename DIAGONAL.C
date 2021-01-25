#include<stdio.h>
int main()
{
int a[3][3],m,n,i,j,sum=0;
printf("\n enter the matrix size\n");
scanf("%d%d",&m,&n);
printf("\n enter %d values of matrix \n",m*n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("\n printing the matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
for(i=0;i<m;i++)
for(j=0;j<n;j++)
if(i==j)
sum=sum+a[i][j];
printf("\n sum of diagonals is %d",sum);
return 0;
}
