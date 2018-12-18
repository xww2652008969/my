#include<stdio.h>
#define N 10
int main()
{
	int a[N],*p;
	
	for(p=&a[1];p<=a+N;p++)
	scanf("%d",p);
	for(p=&a[N];p>=a+1;p--)
	printf("%d\n",*p); 
}