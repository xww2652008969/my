#include<stdio.h>
 int sum(int x,int y)
 {
     int z=x+y;
     return z;
 }
 int mul(int x,int y)
 {
     int z=x/y;
     return z;
 }

int main()
{
    int (*p[2])(int,int)={sum,mul};//2可以表示 函数个数
    int a;
    int i;
    for(i=0;i<=1;i++) //下标从0 开始
     {
         a=p[i](20,5);
         printf("%d\n",a);
     }
}
