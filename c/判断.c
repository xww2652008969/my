#include<stdio.h>
#include<math.h>
#define MAX 100
 main(){
  double a[MAX];int i;
      a[0]=1;
      for(i=1;i<=100;i++)
      {a[i]=0;      }
	  for(i=1;i<=MAX;i++)
	  {
           a[i]=a[i-1]*i;  
		   printf("a[%d]=%.0f\n",i,a[i]);	} 
} 