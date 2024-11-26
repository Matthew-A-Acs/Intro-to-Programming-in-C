/* COP2220 006: Program to display name
Author: Matthew Acs
Assignment: One
Date: 9/08/2019*/

#include <stdio.h>

int main () 
{
    char full[12] = {'M', 'a', 't', 't', 'h', 'e', 'w', ' ', 'A', 'c', 's', '\0'}; /* defines full as a string containing Matthew Acs */ 
   char first[8] = {'M', 'a', 't', 't', 'h', 'e', 'w', '\0'}; /* defines first as a string containing Matthew */
   char last[4] = {'A', 'c', 's', '\0'}; /* defines last as a string containing Acs */
   printf("%s\n", full ); /* prints full name on one line*/
   printf("%s\n%s\n", first,last); /* prints first name on one line and last name on another*/
   printf("%s ",first); /* prints first name on one line*/
   printf("%s",last); /* prints last name on same line as last */
   return 0;
}


