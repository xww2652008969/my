#include<stdio.h>
int sum(int x)
{
	int y;
	for (y=1;y<=x;y++)
	{
		printf("%3d",y);
	}
	   printf("\n");
}
int main ()
{
   int a,i;
   scanf("%d",&a);
   for(i=1;i<=a;i++)
   {
   	sum(i);
   }
   for(i=a-1;i>=1;i--)
   {
   	sum(i);
   }
} 