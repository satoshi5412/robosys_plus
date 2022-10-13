#include <stdio.h>

double get_x1(double x2, double x3)
{
       return( (10.0 - x2 - x3) / 5.0 );
}
double get_x2 (double x1, double x3)
{
       return( (12.0 - x1 - x3) / 4.0 );
}
double get_x3(double x1, double x2)
{
       return( (13.0 - 2.0 * x1 - x2) / 3.0 );
}
int main()
{ 
     double x1,x2,x3;
     double y1,y2,y3;
     int i;

     x1 = x2 = x3 = 1.0; 
     for(i=0; i<20; i++ )
    {
     y1 = x1;
     y2 = x2;
     y3 = x3;

     x1 = get_x1( x2, x3 ) ;
     x2 = get_x2( x1, x3 ) ;
     x3 = get_x3( x1, x2 ) ;

   if((x1-y1<=0.0000000001) && (x2-y2<=0.0000000001) && (x3-y3<=0.0000000001))
{
   printf("収束しました。");
}
   printf( "[i=%2d] x1 = %.10f,x2 =2 %.10f, x3 = %.10f\n", i+1,x1,x2,x3);
}
   return 0;
}

