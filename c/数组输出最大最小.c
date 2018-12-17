#include<stdio.h>
#define N 100
 void max_min(int n){
	int *max,*min;int i;
	int a[N];
	a[0]=0;
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	max=&a[1],min=&a[1];
	for(i=1;i<=n;i++){
	if(a[i]>=*max)
	max=&a[i];
	else if(a[i]<*min)
	min=&a[i]; 
	}
	printf("max=%d\nmin=%d",*max,*min);
} 
main(){
	int n;
	scanf("%d",&n);
	max_min(n);
}