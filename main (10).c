// Matthew Acs 
// Lab 4
// COP 2220 006
// Professor Taebi

#include <stdio.h>
#include <math.h>

void Q1 (void);
void Q2 (void);

int
main ()
{
  Q1 ();
  Q2 ();
  return 0;
}

void
Q1 (void)
{
  printf ("\nQuestion 1\n");
  int i, j, list[10];		//changed parenthesis to brackets
  for (i = 0; i <= 10; i++)	// changed i = 1 to i = 0 and changed , to ; and removed a curly bracket
    {				// nested one of the for loops in the other
      list[i] = (2 * i) + 3;	// added parenthesis to 2*i
      for (j = 0; j < i; j++)	// changed j = 1 to j = 0 and changed , to ; and changed >= to <
	printf (" %d", list[j]);
      printf ("\n");
    }
}

void
Q2 (void)
{
  printf ("\nQuestion 2\n");
  int upper, lower, count, range;
  printf
    ("\nEnter lower limit (integer) and upper limit (integer) for table:\n");
  scanf ("%d%d", &lower, &upper);
  range = ((upper - lower) + 1);
  int integer[range], square[range], cube[range];
  printf ("\n------------------\n   x | x^2 | x^3 |\n------------------\n");
  for (count = 0; count < range; ++count)
    {
      integer[count] = (lower + count);
      square[count] = pow (integer[count], 2);
      cube[count] = pow (integer[count], 3);
      printf ("%4d |%4d |%4d |\n", integer[count], square[count],
	      cube[count]);
    }
    printf ("------------------\n");
}

