/*Question 1&2 of the Midterm.
  Testing how fast Leibniz method converges .
*/
#include <stdio.h>                        /*Including necessary libraries */
#include <math.h>
#include <time.h>
#include "pi_fun2.h"                      /*h-file which calls the Pi-Leibniz function*/

int main (void)
{
    int n,j;
    double pi, eps = 0.0000001, err;      /*Desired Precision*/
    clock_t begin, end;                  
    double t2;  
  
    begin = clock();                      
    
        for(n = 100000; n < 1500000; n += 100000)       /*Number of terms we expect to need to reach the desired precision*/
        {
          pi = pi_leibniz(n);  
          err = fabs (pi - M_PI);                       /*Error = abs|Calculated pi - Known value of pi|*/
          printf("%8d   %20.15f   %20.15f\n", n, pi, err);    
          printf("\n"); 
          if (err < eps)                               /*If error is less than the desired precision; stop the function*/
         {
             break;          
         }
 
        }
    
    end = clock(); 
    
    t2= (double)(end-begin);
    printf("%f \n", t2);  
    
    return 0;
}

