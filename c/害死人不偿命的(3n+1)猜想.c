#include <stdio.h>
int main()
{
  int n;
  int i;
  int j=0;
  scanf("%d",&i);
  for(n=0;i!=1;){
    if(i%2==0)
   { i=i/2;}
   else if(i%2!=0)
   {i=(3*i+1)/2;}
j++;
  }
}