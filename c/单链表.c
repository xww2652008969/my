#include<stdio.h>
#include<stdlib.h>
 int i; 
int main()
{
    struct test
     {
         int mark;
         char name[10];
         struct test *p;
     }*b，*c;
     struct test *frist=NULL;
     struct test *pp;
     for(i=0;i<3;i++)
      {  getchar();
         pp=malloc(sizeof(struct test));
         scanf("%d %s",&(pp->mark),&(pp->name));
         pp->p=frist;
         frist=pp;
      }          //for循环是为了创建结点并且插入链表 frist 
      for(b=NULL,c=frist;c!=NULL&&c->name!='z';b=c,c=c->p);  //定位要删除的姓名为z的数据
      b->p=c->c;
      free(c); //删除结点
}