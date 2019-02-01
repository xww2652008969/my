#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 100
void a(){
	char a[N];
	int b;
	int i;
	scanf("%s",&a);
	b=strlen(a);
	for(i=1;i<=b;i=i+2){
		if(a[i]>='a'&&a[i]<='z')
		a[i]=a[i]-32;
	}
	puts(a); 
}
void b(){
	char a[N];
	int b;
	int i;
	scanf("%s",&a);
	b=strlen(a);
	/*for(i=1;i<=b-1;i++){
		if(a[i]=='*')
		a[i]=' ';
	}*/
	for(i=1;i<=b;i++){
		if(a[i]!='*')
		printf("%c",a[i]); 
	}
	//printf("%s",a);
} 
void c(){
	char a[N],b[N],c[N];
	gets(a);
	gets(b);
	gets(c);
	if(strcmp(a,b)<0&&strcmp(b,c)<0)
	{puts(a);puts(b);puts(c);} 
    if(strcmp(a,b)<0&&strcmp(c,b)<0&&strcmp(a,c)<0)
	{puts(a);puts(c);puts(b);}
	if(strcmp(b,a)<0&&strcmp(a,c)<0)
	{puts(b);puts(a);puts(c);}
    if(strcmp(b,a)&&strcmp(c,a)<0&&strcmp(b,c)<0)
	{puts(b);puts(c);puts(a);}
	if (strcmp(c,a)<0&&strcmp(a,b)<0)
	{puts(c);puts(a);puts(b);}
	if(strcmp(c,a)<0&&strcmp(b,a)<0&&strcmp(c,b)<0)
	{puts(c);puts(b);puts(a);}
	} 
void d(){
	int a[3][3];
	int i,j;
	for(i=1;i<=3;i++){
	    for(j=1;j<=3;j++){
    		scanf("%d",&a[i][j]);
    	}
		 
	   } 
	   for(i=1;i<=3;i++){
   		for(j=1;j<=3;j++){
		   	printf(" %4d",a[i][j]);
		   }
		   printf("\n");
   	}
	
} 
void e(){
	char a[3];int b;int i;
	 srand((int)time(NULL));
	a[0]='A'+rand()%57+0;
	a[1]='A'+rand()%57+0;
	a[2]='A'+rand()%57+0;
	a[3]='A'+rand()%57+0;
	for(i=0;i<=3;i++){
		printf("%c",a[i]);
	}
	
}
void main(){
	a();
	b();
    c();
      d();
  e();
}