#include<stdio.h>
#define N 100000
int main(){
	long int a,i=0;
	int b=1;
	int c[N];
	scanf("%d",&a);
	while(a>0)
	{
	b=a%10;
		a=a/10;
		i+=1;
		c[i]=b;
	}
	while(i>=1)
	{printf("%d\n",c[i]);
	i--;}
}