/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int
main ()
{
  char word[50];
  int length;
  printf ("Enter a list of words.\n");
  printf ("Separatewords by at least one blank.\n");
  printf ("When done, enter %s to quit.\n", "QUIT");
  for (scanf ("%s", word); strcmp (word, "QUIT") != 0; scanf ("%s", word))
    {
        length = strlen(word);
        if (word[length-1]=='y' || word[length-1]=='Y')
        {
        word[length-1]='i';
        word[length]='e';
        word[length+1]='s';
        word[length+2]='\0';
        }
        else if (((word[length-1]=='h')&&(word[length-2]=='s')) || word[length-1]=='s'||((word[length-1]=='h')&&(word[length-2]=='c')))
        {
        word[length]='e';
        word[length+1]='s';
        word[length+2]='\0';
        }
        else
        {
        word[length]='s';
        word[length+1]='\0';
        }
        printf("\n%s\n", word);
    }
    return 0;
}
        
        
        