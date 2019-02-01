 #include<stdio.h>
 int sum (int f)
 	{int i;
	int k=1;
 	for(i=1;i<=f;i++)
 	   { 
 	    k+=i;     
	 }
	    printf("%d\n",k);
	    return k;
 } 
 	main(){
 	int a, b,c,e,ee;
 	a=1;
 	b=2;
 int *p1=&a;
 		int *p2=&b;   //p1 p2指向a b 
 	printf("%d\n",*p1);  
 	printf("%d\n",*p2);   //输出a b 的数值 
 	p1=&b;             //p1指向b 
 	p2=&a;             //  
       printf("0x%p\n",p1);
 	     printf("0x%p\n",p2);    //打印 地址 
 	    p1++;
 	         printf("0x%p\n",p1);
            	p1++;
 	             c=*p1;
 	         printf("0x%p\n",c);
 	         int (*p3)(int)=sum;
 	          e=8;
      ee=p3(e);
 	      sum(e)   ;
 	}