#include<stdio.h>
#define N 100000
int main()
     {
	   int a,b,c,d;
	   int e[N];
	   printf("请输入要比的大小 （输入0结束）"); 
	   for(a=0;a>=0;a++)
	   {
   		scanf("%d",&c);
   		e[a]=c;
   		if(c==0)
   		{
		   	break;
		   }
   	}  
   //	printf("%d\n",a);
   	for(b=2;b<a-1;b++)
   	{if(e[b]>e[b-1])
   	{ e[b]=e[b]; }
   	else if(e[b]<=e[b-1])
   	{
	   	e[b]=e[b-1];
	   }
	   printf("%d\n",e[b]);}
		 printf("最大的是%d\n",e[b-1]);
		 } 