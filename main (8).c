//Matthew Acs 
//COP 2220 006
//Professor Taebi
//Lab 3

#include <stdio.h>
#include <math.h>

void question_1 (void);
void question_2 (void);
void question_3 (void);

int main()
{
    question_1();
    question_2();
    question_3();
    return 0;
}

void question_1 (void)
{
   printf("\n----------\nQUESTION 1\n----------\n");
   int weight, height;
   printf("Enter weight in lbs (as an integer) and height in inches (as an integer):\n"); // added a message to prompt user
   scanf("%d%d", &weight, &height); // added two placeholders instead of one 
   if (weight<100 && height>=72) // rewrote all the logic to include all height and weights
   printf("You are very tall for your weight.\n"); // all the logic was changed to compare height to a weight that is either greater or less than 100 lbs
   else if (weight<100 && height>64) // before there was a typo in the logic that compared weight to 300 in one instance
   printf("You are tall for you weight.\n");
   else if (weight>100 && height<48)
   printf("You are quite short for you weight.\n");
   else
   printf("Your weight is ideal.\n");
}

void question_2 (void)
{
    printf("\n----------\nQUESTION 2\n----------\n");
    float n;
    printf("Enter Richter Scale number (n) of the earthquake:\n");
    scanf("%f", &n);
    if (n<0.0)
    printf("The earthquake cannot have a negative scale!\n");
    else if (0.0<=n && n<5.0)
    printf("The earthquake with a %.2f Richter Scale will cause little or no damage.\n",n);
    else if (5.0<=n && n<5.5)
    printf("The earthquake with a %.2f Richter Scale will cause some damage.\n",n);
    else if (5.5<=n && n<6.5)
    printf("The earthquake with a %.2f Richter Scale will cause serious damage: walls may crack or fall.\n",n);
    else if (6.5<=n && n<7.5)
    printf("The earthquake with a %.2f Richter Scale will be a disaster: houses and buildings may collapse.\n",n);
    else 
    printf("The earthquake with a %.2f Richter Scale will be a catastrophe: most buildings will be destroyed.\n",n);
}

void question_3 (void)
{
    printf("\n----------\nQUESTION 3\n----------\n");
 char status;
 double income, tax;
 printf("What is your status?\n(s for single, h for head of household, t for married with joint income, and d for married with seperate income)\n");
 scanf(" %c", &status);
 printf("What is your income?\n");
 scanf("%lf", &income);
 if (income > 0)
 if (status == 's')
    if (income > 17850.0)
    tax = (0.15*17850.0)+((income-17850.0)*0.28);
    else
    tax = (0.15*income);
 else if (status == 'h')
    if (income > 23900.0)
    tax = (0.15*23900.0)+((income-23900.0)*0.28);
    else
    tax = (0.15*income);
 else if (status == 't')
    if (income > 29750.0)
    tax = (0.15*29750.0)+((income-29750.0)*0.28);
    else
    tax = (0.15*income);
 else if (status == 'd')
    if (income > 14875.0)
    tax = (0.15*14875.0)+((income-14875.0)*0.28);
    else
    tax = (0.15*income);
 else
 printf("This is not a viable status!");
 else
 printf("You do not have an income and therefore do not have tax!\n");
 
 if (income>0 && (status == 's'||status == 'h'||status == 't'||status == 'd'))
 printf("Your tax is $%.2lf on your $%.2lf income.\n", tax, income);
}

