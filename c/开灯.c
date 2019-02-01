#include<stdio.h>
#include<string.h>
#define MAX 1000
main(){
	int i ,j;
 	int a[MAX];
 	int n,k;
 	//for(i=0;i<MAX;i++){
	 //	a[i]=0;
	 //}
 	memset(a,0,sizeof(a));
 	scanf("%d %d",&n,&k);
 	for (i=1;i<=k;i++){
 		for(j=1;j<=n;j++){
 			if(j%i==0){
	 			a[j]=!a[j];}
	 		}
 		}
 for (j=1;j<=n;j++){
 	if(a[j]==0)
 	{printf(" %d",j);}
 } 
  for (j=1;j>0;j++){	
  }
} 