/* COP2220 006: Program to calculate time to cut grass
Author: Matthew Acs
Assignment: One
Date: 9/08/2019*/

#include <stdio.h>
#define CUT_TIME 2

int 
main ()
{
  	float y_length, y_width, h_length, h_width, yard_area, house_area, cutting_area, seconds, minutes; /* defining all variables as floats */
  	printf ("What is the width of your yard?(ft)\n"); /* prompting user for input of yard width */
  	scanf ("%f", &y_width);	/* taking input from user and storing it in y_width */
 	printf ("What is the length of your yard?(ft)\n"); /* prompting user for input of yard length*/
  	scanf ("%f", &y_length); /* taking input from user and storing it in y_length*/
  	printf ("What is the width of your house?(ft)\n"); /* prompting user for input of house width */
  	scanf ("%f", &h_width); /* taking input from user and storing it in h_width */
  	printf ("What is the length of your house?(ft)\n"); /* prompting user for input of house length */
  	scanf ("%f", &h_length); /* taking input from user and storing it in h_length */
  	yard_area = y_length * y_width;	/* calculating yard area and storing it in yard_area */
  	house_area = h_length * h_width; /* calculating house area and storing it in house_area*/
  	cutting_area = yard_area - house_area; /* calculating cutting area and storing it in cutting_area */
  	seconds = cutting_area / CUT_TIME; /* calculating seconds it takes to cut grass*/
  	minutes = seconds / 60;	/* calculating minutes it will take to cut grass*/
  	printf ("It will take %f minutes to cut the grass on your property.", minutes);	/* output result */
  	return 0;
}
