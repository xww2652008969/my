#include<stdio.h>
#define N 100000
int sum(int x){
	if(x==0)
	{printf(" ling");}
	else if(x==1)
	{printf(" yi");}
	else if(x==2)
	{printf(" er");}
	else if(x==3)
	{printf(" san");}
	else if(x==4)
	{printf(" si");}
	else if(x==5)
	{printf(" wu");}
	else if(x==6)
	{printf(" liu");}
	else if(x==7)
	{printf(" qi");}
	else if(x==8)
	{printf(" ba");}
	else if(x==9)
	{printf(" jiu");}
} 
int main(){
	unsigned long a;int d=0,i=1;
	int b=1;
	int c[N];
	scanf("%d",&a);
	while(a>0)
	{
	    b=a%10;
		a=a/10;
		d+=b; 
	}
	printf("%d",d); 
   while(d>0)
   {
   	b=d%10;
   	d=d/10;
   	c[i]=b;
   	i++;
                
}
   while(i>=1)
  {
  	sum(c[i]);
  	i--;
  } 
}