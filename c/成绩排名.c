#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n,i,j,a,b;
    scanf("%d",&n);
    char **mane=(char**)malloc(n*sizeof(char));
    char **student_ID=(char**)malloc(n*sizeof(char));
    int *mark=malloc(n);
    getchar();
    for(i=0;i<n;i++)
     { 
         mane[i]=(char*)malloc(10*sizeof(char));
         student_ID[i]=(char*)malloc(10*sizeof(char));
         scanf("%s",mane[i]) ;
         scanf("%s",student_ID[i]);
         scanf("%d",&mark[i]);
     }
        a=b=mark[0];
     for(i=1;i<n;i++)
     {
       if(mark[i]>a)
         a=mark[i];
      else  if(mark[i]<a)
          b=mark[i];
     }
     for(i=0;i<n;i++)
      {
          if(a==mark[i])
          break;
      }
      for(j=0;j<n;j++)
      {
          if(b==mark[j])
          break;
      }
      printf("%s %s",mane[i],student_ID[i]);
       printf("%s %s",mane[j],student_ID[j]);
}