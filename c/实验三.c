#include<stdio.h>
int main ()
{
    int m ,n,p,q,i;
    float o;
    char a,b,c,d,e,f,aa,bb,cc,dd,ee,ff;
    printf("输入二个整数mn 其中m<n\n");
    scanf("%d%d",&m,&n);
    o=(float)m/(float)n;
    printf("m是n的%.2f%%\n",o);
    //第二题 
    printf("请输入:");
    a=getchar();
    b=getchar();
    c=getchar();
    d=getchar();
    e=getchar();
    f=getchar(); 
    aa=a+1;
    bb=b+1;
    cc=c+1;
    dd=d+1;
    ee=e+1;
    ff=f+1;
 printf("转换后为%c%c%c%c%c",bb,cc,dd,ee,ff);
 printf("\n");
 //第三题 
    printf("输入二个整数\n");
    scanf("%d%d",&m,&n);
    p=m/n;
    q=m%n;
    printf("他们的商是:%d   余是:%d\n",p,q);
    printf("输入一个三位数：\n");
    scanf("%d",&m);
    n=m/100;
    p=m/10%10;
    q=m%10;
    printf("百：%d 十：%d 个：%d\n",n,p,q);
}