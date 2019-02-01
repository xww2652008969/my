#include<stdio.h>
#include<math.h> 
void a()
{
    int a[10],n=0,i;int  j, temp;
   for(i=0;i<10;i++){
   	scanf("%d",&a[i]);
                    }
  
    for (j = 0; j < 9; j++){ 
        for (i = 0; i < 9 - j; i++)
        {
            if(a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
				} 
            }
        }
 for(i=0;i<10;i++){
 	printf(" %d",a[i]);
 }   
}
void b(){
	int a[10];int *p;int i;
	a[0]=0;
	p=&a[0];
	for(i=1;i<=10;i++){
		scanf("%d",&a[i]);
	}
	 for(i=1;i<=10;i++){
 	if(fabs(a[i])<*p)
	 { 	
	 p=&a[i];
	 }	
 	}
    for(i=1;i<=10;i++){
    	if(a[i]==*p)
    	{
	    	a[i]=a[10];
	    	a[10]=*p;
	    }
	    break;
    }
    for(i=1;i<=10;i++){
    	printf(" %d",a[i]);
    }
}
void c(){
	int a;
	scanf("%d",&a);
	if(a>=10&&a<=9999)
	{
		if(a<=99)
		{
			if(a/10==a%10){
				printf("yes");
			}
		else 
			printf("no");
		}
		if(a>100&&a<=999){
			if(a/100==a%10){
				printf("yes");
			}
			else
			printf("no");
		}
		if(a>=1000&&a<=9999){
			if(a/1000==a%10%10&&a/100%10==a/10%10)
			{
				printf("yes");
			}
			else
			printf("no");
		}
	}
      else 
      printf("no");
}
void d(){
	int a[100];int b,i;
	a[0]=0;
	a[1]=1;
	scanf("%d",&b);
	if(b<2)
	printf("%d",a[b]);
	else
	{
		for(i=2;i<=b;i++){
		a[i]=a[i-1]+a[i-2];
	}
	printf("%d",a[b]);
	}
}
void e()
{
	int a[10],*p;
	
	for(p=&a[1];p<=a+10;p++)
	scanf("%d",p);
	for(p=&a[10];p>=a+1;p--)
	printf("%d\n",*p); 
}
void main(){
  a();
  b();	
  c();
  d();
  e();
}