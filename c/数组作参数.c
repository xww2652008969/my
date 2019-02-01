#include<stdio.h>
void print_1(int list[],int a) 
{
    int x;
    for(x=0;x<a;x++)
     {
         printf(" %d",list[x]);
     }
     printf("\n");
}
/*
 print_1函数是遍历一个数组 使用数组作为参数
*/
void print_2(char *p,int a)
{
    int x;
    for(x=0;x<a;x++)
     {
         printf(" %c",*(p+x));
     }
     printf("\n");
}
/*
 print_2函数是遍历一个字符串 使用指针作为参数
*/
void main(void)
{
    int a[9]={1,2,3,4,5,6,7,8,9,0};
    char b[9];
    gets(b);
    print_1(a,9);
    print_2(b,9);
}