#include <math.h>
#include <stdio.h>
 main( )
{
double x, y, y0 ;
printf( "输入一个正数:" ) ;
do
{
scanf("%lf", &x );//格式lf
}
while( x<0 );
y = 1;
do
{
y0 = y;
y = 1.0/2*( y + x / y ); 
}
while ( fabs( y - y0 ) / y > 0.00001);
printf("%.3f\n",  y ); 
}
