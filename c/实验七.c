#include<stdio.h>
#include<math.h>
int one(int x){
	int q;
	for(q=1;q<=2*x-1;q++)
	{
		printf("*");
	
	}
}
int two(int x){
	int i;
	for(i=1;i<=x-2;i++)
	{
		printf(" ");
	}}
	int ree(int x){
	int a;int b;
		for(a=2;a<=x-1;a++)
		{
			b=x%a;
			if(b==0)
		{	break;}
		}
		if(b!=0)
		{
			printf("  %d",x);
		}
}
int main(){
	int a,n,m;int b=1;float f;
	for(a=7;a>=1;a=a-2)
	{
		one(a);
		printf("\n");
	}
	//第一个 
	for(a=5;a>1;a--)
	{
		two(a);
		one(b);
		printf("\n");
		b+=2;
	}
	//第二个
	for(a=5;a<=100;a++){
		ree(a);
	}
	printf("\n");
      //第三个
      scanf("%d%d",&n,&m);
	for(a=1;a<n;a++){
		f=(float)m/4.0-2.0*(float)a/4.0;
		b=fabs(f);
		if(f-b==0&&a+b==n)
		{break;}
	}   
	if(f-b==0&&a+b==n)
	{printf("%d  %d",a,b);	}
   else {printf("No qnswer");}
printf("\n");
}

 