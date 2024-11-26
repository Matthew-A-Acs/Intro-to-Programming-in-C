// Matthew Acs 
// Lab 5
// COP 2220 006
// Professor Taebi

#include <stdio.h>
#include <string.h>
int
main ()
{
  char word[50];
  int length;
  printf("\n-----------------\nWord plural maker\n-----------------\n");
  printf ("Enter a list of words.\n");
  printf ("Separate words by at least one blank.\n");
  printf ("When done, enter %s to quit.\n\n", "QUIT");
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
        
        
        
