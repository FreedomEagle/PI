/* Baily-Borwein-Plouffe*/

 #include <stdio.h>
 #include <math.h>

double pi_bbp(int n)
{
    int i;
    double pi = 0., scale = 1.; 
    int i8;

    for(i = 0; i < n; i++)
    {
       i8 = 8*i;
       pi  +=  scale*(4./(i8 + 1) - 2./(i8 + 4) - 1./(i8 + 5) - 1./(i8 + 6));
       scale /= 16;
    }
    
    return pi;
}
