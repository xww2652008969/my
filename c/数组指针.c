#include<stdio.h>
int main(){
	int i,j;
		int a[3][5]={
	{1,2,3,4,5},
	{4,5,6,7,8},
	{9,8,7,6,5},	
	};
	int *p;
/*	for(i=0;i<=2;i++)
	     {
            for(p=a[i];p<=a[i]+4;p++)
			*p=0;		
         }*/
	for (i=0;i<=2;i++)
	{
		for(p=&a[i]/*µÈ¼ÛÓÚp=a[i]+0*/;p<=a[i]+4;p++)
		{printf("%2d",*p);}
		printf("\n"); 
	}
}