// Matthew Acs 
// COP 2220 006
// Assignment 4
// Professor Taebi
// 11/20/19

#include <math.h>
#include <stdio.h>
void q1 (void); // function prototypes begin-
void q2 (void);
void q3 (void);
void q4 (void);
void letter_grade (int points, char * gradep, int * just_missedp);
int sort (int x); // -function prototypes end

int main()
{
    q1(); // function calls begin-
    q2();
    q3();
    q4(); // -function calls end
    return 0;
}

void q1 (void)
{
    printf("\n---------------------------\n");
    printf("           Question 1          ");
    printf("\n---------------------------\n");
    int x[7], y[7], z; // defines x,y,z as integer variables and x and y as arrays
    for(z=0;z<7;z++) // initializes a for loop that repeats 7 times
    {
        x[z]=z; // sets an array element equal to the counter
        y[z]=pow(2,z); // sets anothe array element equal to 2 to the power of the counter
        printf("%2d%5d\n",x[z],y[z]); // prints results in a table
    }
    printf("\n\n");
}

void q2 (void)
{
    printf("\n---------------------------\n");
    printf("           Question 2          ");
    printf("\n---------------------------\n");
    int n[10]={8,12,18,25,24,30,28,22,23,10},x; // initializes array n with 10 values
   double percent[10],sum; // defines array percent as double and sum as double
   for(x=0;x<10;x++) // uses a for loop to add all of the values together into sum
   sum+=n[x];
   for(x=0;x<10;x++) // uses a for loop to calculate the percent of the total for each value
   percent[x]=(n[x]/sum)*100.00; 
   printf(" n    %% of total\n");
   printf("----------------\n");
   for(x=0;x<10;x++)
   printf("%2d    %5.2f    |\n", n[x], percent[x]); // displays results in a table
   printf("\n\n");
}

void q3 (void)
{
    printf("\n---------------------------\n");
    printf("           Question 3          ");
    printf("\n---------------------------\n");
    {
    char a; // defines a as a char
    int b, c; // defines b and c as integers
    printf("Enter number grade:\n"); // prompts user for input
    scanf("%d", &c); // accepts input
   letter_grade (c, &a, &b); // calls function letter_grade
   printf("Your numerical grade is %d\nYour letter grade is %c\n",c,a); // displays results
   if (b==1)
   printf("You just missed the next grade");
   printf("\n\n");
}
}

void letter_grade (int points, char * gradep, int * just_missedp)
{ // nested if-else if that determines your letter grade based on your number grade
    if (points<=100&&points>=90) // range for A grade
    *gradep='A';
    else if (points<90&&points>=80) // range for B grade
    {
    *gradep='B';
    if (points-9==80) // determines if the next letter was just missed
    *just_missedp = 1;
    else
    *just_missedp = 0;
    }
    else if (points<80&&points>=70) // range for C grade
    {
    *gradep='C';
    if (points-9==70) // determines if the next letter was just missed
    *just_missedp = 1;
    else
    *just_missedp = 0;
    }
    else if (points<70&&points>=60) // range for D grade
    {
    *gradep='D';
    if (points-9==60) // determines if the next letter was just missed
    *just_missedp = 1;
    else
    *just_missedp = 0;
    }
    else if (points<60&&points>=0) // range for F grade
    {
    *gradep='F';
    if (points-9==50) // determines if the next letter was just missed
    *just_missedp = 1;
    else
    *just_missedp = 0;
    }
    else
    *gradep='?'; // displays ? if the number grade was not a real number
}

void q4 (void)
{
    printf("\n---------------------------\n");
    printf("           Question 4          ");
    printf("\n---------------------------\n");
    int y, count; // initializes integer variables y and count
  printf
    ("This program will take your input and tell you if each element\nis either a letter or not. It will then tell you the location \nof the letter in the alphabet. Please no spaces in the input!\n");
  printf ("Enter length of input:\n"); // prompts user for input
  scanf ("%d", &y); // stores input into y
  int letter_number[y]; // defines letter_number as an integer array
  char x[y]; // defines x as a character array
  printf ("Enter input:\n"); // prompts user
  scanf ("%s", x); // stores input into x
  for (count = 0; count < y; count++) // for loop that calls function sort untill all of the elements are sorted and displays results
    {
      letter_number[count] = sort (x[count]); // calls sort function
      if (letter_number[count] != -1)
	printf ("Element #%d is letter %c and is #%d in the alphabet\n",
		count + 1, x[count], letter_number[count]); // prints results if it is a letter
      else
	printf ("Element #%d is not a letter\n", count + 1); // prints results if it is not a letter
    }
}

int sort (int x)
{
  if ((x != '1') && (x != '2') && (x != '3') && (x != '4') && (x != '5')
      && (x != '6') && (x != '7') && (x != '8') && (x != '9') && (x != '0')) // if x is not a number
    {
      if (x <= 'Z' && x >= 'A') // if x is capitol
	return x - 64; // determine location in alphabet and retun it
      else if (x <= 'z' && x >= 'a') // if x is lower case
	return x - 96; // determine location in alphabet and return it
      else
	return -1; // else return -1
    }
  else
    return -1;
}
