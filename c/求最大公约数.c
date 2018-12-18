#include<stdio.h>
int god(int a,int b)
{
	int c;
	c=a%b;
	if(c==0)
	{printf("%d\n",b);
	return b;}
	
	else 
	god(b,c);
} 
int main()
{int a,b;
scanf("%d%d",&a,&b);
god(a,b);
printf("%d\n%8d\n",a,a);
}