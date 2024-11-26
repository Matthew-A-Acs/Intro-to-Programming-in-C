
#include <stdio.h>
#include <math.h>
#define PI 3.14159

void question_1 (void);
void question_2 (void);
void question_3 (void);
void jolly (void);
void end_line (void);

int main(void)
{
    question_1();
    question_2();
    question_3();
    return 0;
}
void question_1 (void)
{
    float radius;
    float volume, next;
    printf("SPHERE VOLUME CALCULATOR.\nEnter radius (cm): ");
    scanf("%f", &radius);
    volume = (4.0/3.0)*PI*pow(radius,3);
    printf("The volume is %.2f cm cubed which is %.2e cm cubed.\n",volume, volume);
    printf("TYPE A NUMBER AND PRESS ENTER TO CONTINUE.");
    scanf("%f", &next);
}
void question_2 (void)
{
    float num_1, num_2, num_3, average, next;
    printf("\nAVERAGE CALCULATOR.\nEnter number one:");
    scanf("%f", &num_1);
    printf("Enter number two:");
    scanf("%f", &num_2);
    printf("Enter number three:");
    scanf("%f", &num_3);
    average = (num_1+num_2+num_3)/3.0;
    printf("The average is %.2f.\n", average);
    printf("TYPE A NUMBER AND PRESS ENTER TO CONTINUE.");
    scanf("%f", &next);
}
void question_3 (void)
{
    printf("\n");
    jolly();
    jolly();
    jolly();
    end_line();

}
void jolly (void)
{
    printf("\aFor he’s a jolly good fellow!\n");
}
void end_line (void)
{
    printf("Which nobody can deny.");
}


