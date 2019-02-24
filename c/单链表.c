#include<stdio.h>
#include<stdlib.h>
#define N 10
 int i; 
 int j;
 int k;
int main()
{
    struct test
     {
         int mark;
         int ID;
         char name[N];
         struct test *p;
     }*b,*c;
     struct test *frist=NULL;
     struct test *pp;
     printf("请输入录入学生数据的个数");
     scanf("%d",&j);
     for(i=0;i<j;i++)
      {  getchar();
         pp=malloc(sizeof(struct test));
         scanf("%d%d%s",&(pp->ID),&(pp->mark),&(pp->name));
         pp->p=frist;
         frist=pp;
      }          //for循环是为了创建结点并且插入链表 frist 
      printf("请输入查找学生的Id");
      scanf("%d",&k);
      for(b=NULL,c=frist;c!=NULL&&c->ID!=k;b=c,c=c->p);  
      {

      }
      printf("%s\n%d",(c->name),(c->mark));
}