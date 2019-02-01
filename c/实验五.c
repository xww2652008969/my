#include <stdio.h>
int main(){
	   int a;float p,w,s,d,f; 
	   printf("输入你的分数\n");
	   scanf("%d",&a);
	   if(a<60)
	   	{printf("属于E级别");   	}
          else if (a>=60&&a<=69)
          {printf("属于D级别");}
          else if(a>=70&&a<=79)
          {printf("属于C级别");}
          else if(a>=80&&a<=89)
          {printf("输入B级别");}
          else if(a>=90)
{printf("属于A级别");}
printf("\n");
//////////////第二 
        printf("请你输入运费货重和距离；") ; 
		scanf("%f%f%f",&p,&w,&s);
        if(s<250)
        {	d=0;   }
      else  if(s>=250&&s<500)
        {
        	d=0.02;
        }
        else if(s>=500&&s<1000)
        {
        	d=0.05;
        }
        else if(s>=1000&&s<2000)
        {
        	d=0.08;
        }
        else if(s>=2000&&s<3000)
        {
        	d=0.1;
        }
        else if(s>=3000)
        {
        	d=0.15;
        }
        f=p*w*w*(1-d);
        printf("你的运费为；%.2f",f);
        int date1,date2,c;
        char op;
        printf("输入你要计算的式子\n");
        scanf("%d%c%d",&date1,&op,&date2);
		switch(op){
		  case '+': c=date1+date2; break;
		  case'-': c=date1-date2; break;
		  case'*': c=date1*date2; break;
		  case'/': c=date1/date2; break;
                   } 
               printf("result=%d\n",c);
               
scanf("%d",&a);
switch(a)
{
case 1:
printf("Monday");
break;
case 2:
printf("Tuesday");
break;
case 3:
printf("Wednesday");
break;
case 4:
printf("Thursday");
break;
case 5:
printf("Friday");
break;
case 6:
printf("Saturday");
break;
case 7:
printf("Sunday");
}
printf("\n");
}