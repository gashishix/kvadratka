#include "header.h"
#include <stdlib.h>

int main ()
{
    // анализ аргументов командной строки
    enum number_of_solutions SOLUTIONS = NO_SOLUTION;
    enum user_choice choice = EQUATION;

    double a = 0;
    double b = 0;
    double c = 0;

    double x1 = 0;
    double x2 = 0;

    printf ("If you want to solve equation - press 1.\n");
    printf ("If you want to test program - press 2.\n");
    printf ("If you want to kaif - press 3.\n");

    choice = your_choice ();

    switch (choice)
    {
        case EQUATION:

            input_coefficients (&a, &b, &c);
            if (compare_zero (a))
            {
                linear_equation (b, c, &x1, &x2, &SOLUTIONS);
            }
            else
            {
                quadra_equation (a, b, c, &x1, &x2, &SOLUTIONS);
            }
            output (&x1, &x2, SOLUTIONS);
            break;

        case TEST:
            testirovshik (&x1, &x2, SOLUTIONS);
            break;

        case PT:
            printf("\n");
            jaba();
            break;

        default:
            printf("ERROR\n");
            break;
    }

     system("pause");
}

