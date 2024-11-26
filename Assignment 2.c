// COP 2220 006
// Assignment One
// 9/25/19
// Matthew Acs

#include <stdio.h> // include the printf and scanf functions
#include <math.h> // include basic math operations
#define MASS_MOLECULE 0.00000000000000000000003 // define MASS_MOECULE as 0.00000000000000000000003 grams

void question_1 (void); // prototypes for all user defined fuctions to be used
void question_2 (void);
void smile (void);
void question_3 (void);
void question_4 (void);
void question_5 (void);
void one_three (void);
void two (void);

int main ()
{
    question_1(); // call function question_1
    question_2(); // call function question_2
    question_3(); // call function question_3
    question_4(); // call function question_4
    printf("\nstarting now:\n"); // print starting now:
    question_5(); // call function question_5
    printf("done!\n\n"); // print done!
    return 0;
}

void question_1 (void) // function definition for question_1
{
    float x_1,x_2,y_1,y_2,z_1,z_2,distance,go; // defines all variables needed as floats
    printf("\a3D POINT DISTANCE FINDER.\nEnter the first coordinate (x y z):"); // prompts user for coordinate inputs
    scanf("%f%f%f",&x_1,&y_1,&z_1); // stores inputs in variables
    printf("Enter the second coordinate (x y z):"); // prompts user for second coordinate
    scanf("%f%f%f",&x_2,&y_2,&z_2); // stores inputs in variables
    distance = sqrt((pow(x_1-x_2,2)+pow(y_1-y_2,2)+pow(z_1-z_2,2))); // does distance calculations
    printf("The distance between point (%.2f,%.2f,%.2f) and (%.2f,%.2f,%.2f) is %.2f units\n", x_1,y_1,z_1,x_2,y_2,z_2,distance); // displays results
    printf("\nTYPE A NUMBER AND PRESS ENTER TO CONTINUE:\n"); // prompts user to interact with the program to continue to the next part
    scanf("%f", &go);
}

void question_2 (void) // function definition for question_2
{
    float go; // defines variables needed as floats
    printf("\n"); // returns cursor to a new line
    smile(); // calls user defined function smile
    smile();
    smile();
    printf("\n"); // returns cursor to a new line
    smile();
    smile();
    printf("\n");
    smile();
    printf("\n\nTYPE A NUMBER AND PRESS ENTER TO CONTINUE:\n"); // prompts user to interact with the program to continue to the next part
    scanf("%f", &go);
}

void smile (void) // function defintion for smile
{
    printf("Smile!"); // prints Smile!
}

void question_3 (void) // function defintion for question_3
{
    float go; // defines necessary variables as floats
    printf("\aStartled by the sudden sound, Sally shouted,\"By the Great Pumpkin, what was that!\"\n"); // prints a sentence
    printf("\nTYPE A NUMBER AND PRESS ENTER TO CONTINUE:\n"); // prompts user to interact with the program to continue to the next part
    scanf("%f", &go);
}

void question_4 (void) // function definition for question_4
{
    double quarts, molecules, grams, go; // defines as necesary variables as floats
    printf("QUARTS OF WATER TO MOLECULES COVERTER. \nEnter the number of quarts of water:\n"); // prompts user to input quarts of water
    scanf("%lf", &quarts); // stores user input
    grams = quarts*950; // calculates grams of water in the number of quarts entered
    molecules = grams / MASS_MOLECULE; // calculates the number of moleules in the quarts of water
    printf("That is %.2e molecules of water\n", molecules); // displays result in scientific notation
    printf("\nTYPE A NUMBER AND PRESS ENTER TO CONTINUE:\n"); // prompts user to interact with the program to continue to the next part
    scanf("%lf", &go);
}

void question_5 (void) // function defintion for question_5
{
    one_three (); // calls user defined function one_three
}

void one_three (void) // function definition for one_three
{
    printf("one\n"); // prints one and returns cursor to a new line
    two(); // calls user defined function two
    printf("three\n"); // prints three and returns cursor to a new line
    
}

void two (void) // function definition for two
{
    printf("two\n"); // prints two and returns cursor to a new line
}
