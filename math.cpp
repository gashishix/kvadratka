//math file

#include "header.h"

void linear_equation(double b, double c, double* p_x1, double* p_x2,
                     enum number_of_solutions* SOLUTIONS)
                     {

    if (!compare_zero(b))
    {
        if (compare_zero(c))
        {
            *p_x1 = *p_x2 = 0.0;
            *SOLUTIONS = ONE_SOLUTION;
        }

        else
        {
            *p_x1 = *p_x2 = (-c)/ b;
            *SOLUTIONS = ONE_SOLUTION;
        }
    }

    else if (compare_zero(b) && compare_zero(c))
    {
        *p_x1 = 0;
        *p_x2 = 0;
        *SOLUTIONS = INF;
    }

    else
    {
        *p_x1 = 0;
        *p_x2 = 0;
        *SOLUTIONS = NO_SOLUTION;
    }
}


void quadra_equation (double a, double b, double c, double *p_x1,
                     double * p_x2, enum number_of_solutions *SOLUTIONS)
                     {

    double d = 0,
        d_sqrt = 0;
    d = b * b - 4 * a * c;
    d_sqrt = sqrt(d);

    if (compare_zero(b) && (c < 0))
    {
        *p_x1 = sqrt(-c) / a;
        *p_x2 = -(*p_x1);
        swit4 (p_x1, p_x2);
        *SOLUTIONS = TWO_SOLUTIONS;
    }

    else if (compare_zero(c) && !(compare_zero(b)))
    {
        *p_x1 = 0.00;
        *p_x2 = -b / a;
        swit4 (p_x1, p_x2);
        *SOLUTIONS = TWO_SOLUTIONS;
    }

    else if ((!compare_zero(d)) && (d > 0))
    {
        *p_x1 = (-b - d_sqrt) / (2 * a);
        *p_x2 = (-b + d_sqrt) / (2 * a);
        swit4 (p_x1, p_x2);
        *SOLUTIONS = TWO_SOLUTIONS;
    }

    else if (compare_zero(d))
    {
        *p_x1 = *p_x2 = (-b) / (2 * a);
        *SOLUTIONS = ONE_SOLUTION;
    }

    else
    {
        *p_x1 = *p_x2 = 0;
        *SOLUTIONS = NO_SOLUTION;
    }
}


bool comporator (double u, double v)
{
    return (fabs(u - v) < ZERO);
}

bool compare_zero (double x)
{
    return (fabs(x) < ZERO);
}

// swap я попробовал, такая функция в С тоже есть, так что увы и ах

void swit4(double* p_x1, double* p_x2)
{
    double dop_slot;
    if (*p_x1 > *p_x2)
    {
        dop_slot = *p_x1;
        *p_x1 = *p_x2;
        *p_x2 = dop_slot;
    }
}



