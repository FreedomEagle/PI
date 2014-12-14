 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>
 
double pi_leibniz(int n)
{ 
    int i;
    int s=1;
    double pi=0;

    for(i =1; i < (n*2); i+=2)
    {
        pi += +s*(4./i);
        s = -s;
    }

    return pi;
}
