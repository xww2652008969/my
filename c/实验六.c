#include <stdio.h>
int func1();
int func2();
int func3();  //程序运行很慢？
int func4();
int func5();
int func6();

int main(void)
{
	func1();
	func2();
	func3();
	func4();
	func5();
	func6();
}

int func1()
{
	int i, n;
	printf("请输入n的值：");
	scanf("%d", &n);
	printf("n以下的所有奇数为：");
	for (i=n; i>0;i--)
		if (i%2!=0)
			printf("%d ", i);
	printf("\n");

	return 0;
}

int func2()
{int d;
int a[100000];
int b=0;
int c=1;
int n,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	scanf("%d",&a[i]);
	b+=a[i];
	c*=a[i];
	d=b/n;
}
printf("和为%d\n积为%d\n平均值为%d\n",b,c,d);
}
	
int func3() //程序运行很慢？
{int i;
	float sum, price=1;
	sum = 0;
	printf("请输入商品价格（0表示结束）：");
	for(;price!=0;) 
	{scanf("%f", &price);
	sum+=price;

	 }
	printf("总价格：%.2f\n", sum);
}

int func4()
{
	int a=0, b=0, i, sum;
	sum = 0;
	for (i=1;i<100;i+=2)
		a += i;
	for (i=2;i<100;i+=2)
		{b += i;} 
	sum = a-b;
	printf("1-2+3-4+5 ... 99的所有数的和：%d\n", sum);

	return 0;
}

int func5()
{
	int i;
	i = 1;
	while (i<11)
	{
		if (i==7)
		{
			i += 1;
			printf("  ");
		}
		printf("%d ", i);
		i++;
	}
	printf("\n");
	return 0;
}

int func6()
{
	int n;
	for (n=7;;n++)
		if(n%2==1 && n%3==2 && n%5==4 && n%6==5 && n%7==0)
		{
			printf("爱因斯坦的数学问题最小解：%d\n", n);
			break;		
		}
	return 0;
}