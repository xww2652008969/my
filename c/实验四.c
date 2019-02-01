#include<stdio.h>
#include<math.h>
int sum1(int x ,int y)
{int z;
 z= x>y ?x:y;	
}
int sum2(double k)
 {
 	double l;
 	if(k<0)
 	{
	 	printf("%.2f",fabs(k));
	 }
	 if(k>=0&&k<2)
	 {
 		l=sqrt(k+1);
 		printf("%.2f",l);
 	}
 	if(k>=2&&k<4)
 	{
	 	l=pow(k,3);
	 	printf("%.2f",l);
	 }
	 if(k>=4)
	 {
 		l=2*k+5;
 		printf("%.2f",l);
 	}
 }
int main()
{int a,b ,c,d;char ,qq,q,ch; float aa,bb,cc; double aaa;
printf("请输入三个整数: "); 
	scanf ("%d%d%d",&a,&b,&c);
	d=sum1(sum1(a,b),c);
     printf("%d\n",d);
     //第二题 
     printf("请输入一个字母: "); 
scanf("%c%c%c",&qq,&q,&ch);
 if('Z'>=ch&&ch>='A')
     {
     	printf("是一个大写字母: ");
     }
     printf("请输入身高（cm）和体重（kg）"); 
     scanf("%f%f",&a,&b);
     cc=(aa-100)*0.9;
     if(bb>cc)
     {
     	printf("n你的体重偏高:"); 
     }
     printf("请输入不同的二个整数");
     scanf("%d%d",&a,&b);
     if(a>b)
     {printf("排列后为；%d  %d\n",b,a);}
     printf("排列后为；%d   %d\n",a,b);
     printf("请输入一个数\n")
	 scanf("%lf",&aaa);
     sum2(aaa);
}
