//core file

#include "header.h"

user_choice your_choice ()
{
    enum user_choice choice = EQUATION;

    do
    {
        printf("Press 1, 2 or 3.\n");
        scanf("%d", &choice);

    } while ((choice != EQUATION) && (choice != TEST) && (choice != PT));

    return choice;
}


void input_coefficients (double* a, double* b, double* c)
{
    assert (a != NULL);
    assert (b != NULL);
    assert (c != NULL);

    printf ("Enter coefficients a, b and c of a quadratic equation:\n");
    while (scanf ("%lf %lf %lf", a, b, c) != 3){
        while (getchar() != '\n')
            ;

        printf ("Data is incorrect. Enter it again.\n");
    }
}


void output (double* x1, double* x2, enum number_of_solutions SOLUTIONS)
{
    switch (SOLUTIONS)
    {
    case INF:
        printf ("The root is any number.\n");
        break;

    case NO_SOLUTION:
        printf ("Equation has no roots.\n");
        break;

    case ONE_SOLUTION:
        printf ("There is one root: %.2lf\n", *x1);
        break;

    case TWO_SOLUTIONS:
        printf("There are two roots: %.2lf and %.2lf\n", *x1, *x2);
        break;

    default:
        printf("PROGRAMM OUTPUT ERROR");
        break;
    }
}


