#include<stdio.h>
#define N 9
#define M 100
int main()
{
	char  z[N][M];
	int a,b,i,j;
	scanf("%d",&a);
	getchar();
	for(i=0;i<a;i++)
	{
        gets(z[i]);  
	}
	

 for(i=0;i<a;i++)
 {
    for(j=0;z[i][j]!='\0';j++)
	 {
		if(z[i][j]!=' '&&z[i][j]!='P'&&z[i][j]!='A'&&z[i][j]!='T')
		{
			goto no;
		}
	 }
   for(j=0;z[i][j]!='\0';j++)
	 {
		 if(z[i][j]=='P'&&z[i][j+1]=='A'&&z[i][j+2]=='T')
		  {
			  for(b=j-1;b>=0;b--)
			   {
				   if(z[i][b]=='T'||z[i][b]=='P')
				    {
						goto no;
					}
			   }
			  for(b=j+3;z[i][b]!='\0';b++)			
			     {
				     if(z[i][b]=='T'||z[i][b]=='P')
				    {
						goto no;
					}
			     }
				 break;
		    }
}
   for(j=0;z[i][j]!='\0';j++)
    {
		if(z[i][j]=='P'&&(z[i][j+1]=='A'||z[i][j+1]==' ')&&z[i][j+2]=='A'&&z[i][j+3]=='T')
		 { for(b=j-1;b>=0;b--)
			   {
				   if(z[i][b]=='T'||z[i][b]=='P')
				    {
						goto no;
					}
			   }
			  for(b=j+4;z[i][b]!='\0';b++)			
			     {
				     if(z[i][b]=='T'||z[i][b]=='P')
				    {
						goto no;
					}
			     }
				 break;}
	}
     printf("YES\n");
	 continue;
	 no :
	 {
		 printf("NO\n");
		 continue; 
	 }
 }
 
 
}