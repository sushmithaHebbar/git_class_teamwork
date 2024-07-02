#include<stdio.h>
#include<time.h>
int min(int,int);
void floyd(int a[][],int n);
int main()
{
int i,j,n,a[10][10];
clock_t start,end;
printf("enter the number of vertices\n");
scanf("%d",&n);
printf("Enter the cost matrix\n");
scanf("%d",&a[i][j]);
start=clock();
floyd(a,n);
end=clock();
printf("the shortest path matrix\n");
for(int i=1;i<=n;i++)
 for(int j=1;j<=n;j++)
    printf("%d",a[i][j]);
}
void floyd(int a[10][10],int n)
{
for(int k=1;k<=n;k++)
   for(int i=1;k<=n;i++)
       for(int j=0;j<=n;j++)
            a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
}
int min(int a,int b)
{
return (a<b?a:b);
}
return 0;


