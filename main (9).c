// Matthew Acs 
// COP 2220 006
// Assignment 3
// Professor Taebi
// 10/18/19

#include <stdio.h> // header for printf and scanf
#include <math.h> // header for math functions
#define PI 3.14159 //definition of PI

float factorial (int x); // prototypes start -
void question_1 (void);
void question_2 (void);
void question_2b (void);
void question_3 (void);
void question_4 (void); // - prototypes end

int
main () 
{
  question_1 (); // function calls start -
  question_2 ();
  question_2b ();
  question_3 ();
  question_4 (); // - function calls end
  return 0;
}

void
question_1 (void) // function defintion for question_1
{
  float final_num; // definition of variable final_num as float
  int int_num; // definition of int_num as int
  printf
    ("--------------------\nFACTORIAL CALCULATOR\n--------------------\n\nEnter an integer to calculate the factorial of:\n"); // prompting user for input
  scanf ("%d", &int_num); // storing user input in int_num
  final_num = factorial (int_num); // calling function factorial with input of int_num and storing it in final_num
  printf ("%d! equals about %.2f\n\n", int_num, final_num); // displaying results
}

float
factorial (int x) // definition of factorial function
{
  return (pow (x, x)) * (exp (-x)) * (sqrt (PI * ((2.0 * x) + (1.0 / 3.0)))); // returning value of calculation for estimation of factorial
}

void
question_2 () // defintion of question_2 function
{
  int watts, lumens; // defintion of watts and lumens variables as ints
  printf
    ("-------------------------------------------------------\nEXPECTED BRIGHTNESS OF A STANDARD LIGHT BULB CALCULATOR\n(OR EBSLBC FOR SHORT)\n-------------------------------------------------------\n\nEnter the number of watts of your light bulb:\n"); // prompting user for input
  scanf ("%d", &watts); // storing user input into watts
  switch (watts) // initializing switch
    {
    case 15: // if user inputs 15 then lumens equals 125
      lumens = 125;
      break;
    case 25: // if user inputs 25 then lumens equals 215
      lumens = 215;
      break;
    case 40: // if user inputs 40 then lumens equals 500
      lumens = 500;
      break;
    case 60: // if user inputs 60 then lumens equals 880
      lumens = 880;
      break;
    case 75: // if user inputs 75 then lumens equals 1000
      lumens = 1000;
      break;
    case 100: // if user inputs 100 then lumens equals 1675
      lumens = 1675;
      break;
    default: // if user inputs none of the above then lumens equals -1
      lumens = -1;
      break;

    }
  printf ("The expected brightness of your light bulb is %d lumens\n\n",
	  lumens); // displays results
}

void
question_2b () // definition of question_2b function
{
  int watts, lumens; // everything in 2b is the same as 2 but uses nested else if statements instead of a switch
  printf
    ("-------------------------------------------------------\nEXPECTED BRIGHTNESS OF A STANDARD LIGHT BULB CALCULATOR\n(OR EBSLBC FOR SHORT)\nPart B; Now with nested if statements!\n-------------------------------------------------------\n\nEnter the number of watts of your light bulb:\n");
  scanf ("%d", &watts);
  if (watts == 15)
    lumens = 125;
  else if (watts == 25)
    lumens = 215;
  else if (watts == 40)
    lumens = 500;
  else if (watts == 60)
    lumens = 880;
  else if (watts == 75)
    lumens = 1000;
  else if (watts == 100)
    lumens = 1675;
  else
    lumens = -1;
  printf ("The expected brightness of your light bulb is %d lumens\n\n",
	  lumens);
}

void
question_3 () // definition of question_3 function
{
  float lbs, height, bmi; // definition of variables lbs, height, and bmi as floats
  printf
    ("--------------\nBMI CALCULATOR\n--------------\n\nEnter your height(in) and weight(lbs):\n"); // prompts user for input
  scanf ("%f%f", &height, &lbs); // stores inputs into height and lbs
  bmi = (703.0 * lbs) / (pow (height, 2)); // stores bmi calculation into bmi
  bmi = (ceil((bmi *= 10.0)-0.5))/10.0; // the assignment asks for the bmi to be rounded to the tenths place, so this line multiplies bmi by ten, subtracts 0.5 then rounds up, and finally divides by 10
  if (bmi < 18.5) // (next 8 lines) nested else if statements that determine output based on bmi calculation of user inputs
    printf ("You are underweight ");
  else if (18.5<=bmi && bmi<=24.9) // while the else if seems to exclude any number between 24.9 and 25.0, because the number is rounded to the tenths place it does not actually exclude data
    printf ("You have a normal weight ");
  else if (25.0<=bmi && bmi<=29.9)
    printf ("You are overweight ");
  else
    printf ("You are obese ");
  printf ("because your BMI is %.1f\n", bmi); // printf that adds onto the output of the user category with acutal bmi
}

void
question_4 () // defintion of question_4 function
{
  float x, y; // defines x and y as floats
  printf
    ("\n-------------\nQUADRANT FINDER\n-------------\nEnter coordinate (x y):\n"); // prompts user for inputs
  scanf ("%f%f", &x, &y); // stores inputs into x and y
  if ((x < 0) && (y < 0)) // if both x and y are negative, then the coordinate is in the 3rd quadrant
    printf ("The point (%.1f, %.1f) is in Quadrant III", x, y);
  else if ((x > 0) && (y < 0)) // if x is positive but y is negative then the coordinate is in the 4th quadrant
    printf ("The point (%.1f, %.1f) is in Quadrant IV", x, y);
  else if ((x < 0) && (y > 0)) // if y is positive but x is negative then the coordinate is in the 2nd quadrant
    printf ("The point (%.1f, %.1f) is in Quadrant II", x, y);
  else if ((x > 0) && (y > 0)) // if both x and y are positive, then the coordinate is in the 1st quadrant
    printf ("The point (%.1f, %.1f) is in Quadrant I", x, y);
  else if ((x == 0) && (y != 0)) // if x is 0 but y is not, then the coordinate is on the y axis
    printf ("The point (%.1f, %.1f) is on the Y axis", x, y);
  else if ((x != 0) && (y == 0)) // if y is 0 but x is not, then the coordinate is on the x axis
    printf ("The point (%.1f, %.1f) is on the X axis", x, y);
  else // if none of the above is true, then the point is on the origin
    printf ("The point (%.1f, %.1f) is on the origin", x, y);
}
