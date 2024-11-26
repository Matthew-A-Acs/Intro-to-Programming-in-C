/* COP2220 006: Program to change fahrenheit to celsius
Author: Matthew Acs
Assignment: One
Date: 9/08/2019*/

#include <stdio.h>

int main () 
{
     int fahrenheit; /* define int fahrenheit */
   double celsius; /* define int celsius */
   printf("Insert degrees fahrenheit:"); /* prompt user to input fahrenheit */
   scanf("%d", &fahrenheit); /* take user input and store it in int fahrenheit */
   celsius = 0.55555555*(fahrenheit-32); /* calculate celsius */
   printf("calculating...\n"); 
   printf("%d degrees fahrenheit = %f degrees celsius", fahrenheit, celsius); /* display output of calculation */
   return 0;
}
