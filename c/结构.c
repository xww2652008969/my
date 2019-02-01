#include<stdio.h>
void main(){
	struct part{// 定义 part结构类型 
		int a;
	};
	struct part part1={2},part2={3};// 对part结构类型赋值 
	printf("%d",part1.a);
	printf("%d",part2.a);
}