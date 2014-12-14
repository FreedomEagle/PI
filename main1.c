/*Question 3&4 of the Midterm.
  Testing how fast Baily-Borwein-Plouffe converges .
*/

#include <stdio.h>                              /*Including necessary libraries */
#include <math.h>                                  
#include <time.h>
#include "pi_fun.h"                             /*h-file which calls the Pi-bbp function*/

int main (void)
{
    int n ;                                                   
    double pi, eps = 0.0000001, err;            /*Desired Precision*/
    clock_t begin, end;
    double t1;

    begin = clock ();                            

    {
        for (n = 1; n < 9; n++)                 /*Number of terms we expect to need to reach the desired precision*/
        {
            pi = pi_bbp (n);
            err = fabs (pi - M_PI);             /*Error = abs|Calculated pi - Known value of pi|*/
            printf ("%8d   %20.15f   %20.15f\n", n, pi, err);
            printf ("\n");
            if (err < eps)                      /*If error is less than the desired precision; stop the function*/
            {
                break;              
            }
        }
    }
    end = clock ();
    t1 = ((double) (end - begin));
    printf ("%.15f \n", t1);                       

    return 0;
}
