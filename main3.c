/*Question 5 of the Midterm.
  Testing how the efficency of Baily-Borwein-Plouffe and Leibniz method compared to one another .
*/
#include <stdio.h>                  /*Including necessary libraries */
#include <math.h>
#include <time.h>

#include "pi_fun.h"                 /*h-file which calls the Pi-bbp function*/
#include "pi_fun2.h"                /*h-file which calls the Pi-leibniz function*/

int main(void)
{
    int n = 1500000, j;
    int n1 = 250, n2 = 1000000;
    double pi, err;
    clock_t begin, end;
    double t1, t2;  
    
    begin = clock();               
    for (j=0; j < n1; j++)          /*Pi_leibniz will be performed 250 trials*/
    {
        pi = pi_leibniz(n);  
        err = fabs(pi - M_PI); 
    }
    end = clock();                   
    printf("%8d   %20.15f   %20.15f\n", n, pi, err);          /*Total # of iteration needed to converge, value of pi, and it's error*/
    t2= ((double)(end-begin))/ n1;                           
    printf("%f \n", t2);            /*Average time required for Pi-Leibniz*/

    begin = clock();                 
    for (j = 0; j < n2; j++)         /*Pi_leibniz will be performed  a million trials*/
    { 
        n = 5;
        pi = pi_bbp(n);  
        err = fabs(pi - M_PI);       
    }
    end = clock(); 
    printf("%8d   %20.15f   %20.15f\n", n, pi, err);         /*Total # of iteration needed to converge, value of pi, and it's error*/
    t1= ((double)(end-begin))/n2;
    printf("%f \n", t1);            /*Average time required to reach desired precision for Pi-BBP*/

    printf("Algorithms speedup: %10.2f\n", t2/t1);          /*Efficency in respect to one another*/
    return 0;
}

