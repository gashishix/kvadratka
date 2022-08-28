//header file
// non informative name
#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>

/**

@brief this constant helps us to compare doubles

*/

const double ZERO = 0.001;

/**

@brief constants of numbers, that mean user's choice

@param EQUATION if user wants to solve equation

@param TEST if user wants to test the program

@param PT if user wants to chill and flex without cringe

*/

enum user_choice
{
    EQUATION = 1,
    TEST = 2,
    PT = 3,
};

/**

@brief constants of numbers of solutions

@param INF if root is any number

@param NO_SOLUTION if there isn't roots

@param ONE_SOLUTION if there is one root

@param TWO_SOLUTIONS if there are two roots

*/

enum number_of_solutions
{
    INF = -1,
    NO_SOLUTION = 0,
    ONE_SOLUTION = 1,
    TWO_SOLUTIONS = 2,
};

/**

@brief input_coefficients gets coefficients of equation

@param a - coefficient before x^2

@param b - coefficient before x^1

@param c - coefficient before x^0

*/

void input_coefficients(double* a, double* b, double* c);

/**

@brief output prints results of the solution

@param p_x1 - address of the first root

@param p_x2 - address of the second root

@param SOLUTIONS - number of roots

*/

void output (double *p_x1, double *p_x2, enum number_of_solutions SOLUTIONS);

/**

@brief it helps us chill, flex and hype without cringe

*/

void jaba();

/**

@brief compare_zero correctly compares double numbers with 0

@param x - comparable number

*/

bool compare_zero (double x);

/**

@brief comporator correctly compares two double numbers

@param u - first comparable number

@param v - second comparable number

@return true if u nearly equal v and false if u and v are different

*/

bool comporator (double u, double v);

/**

@brief your_choice let's user to choose program mode

*/

user_choice your_choice();

/**

@brief linear_equation solves linear equation

@param b - coefficient near x^1

@param c - coefficient near x^0

@param p_x1 - address of first root

@param p_x2 - address of second root

@param SOLUTIONS - address of number of solutions

*/

void linear_equation (double b, double c, double *p_x1, double *p_x2,
                number_of_solutions *SOLUTIONS);

/**

@brief quadra_equation solves linear equation

@param a - coefficient near x^2

@param b - coefficient near x^1

@param c - coefficient near x^0

@param p_x1 - address of first root

@param p_x2 - address of second root

@param SOLUTIONS - address of number of solutions

*/

void quadra_equation (double a, double b, double c, double *p_x1,
                     double * p_x2, enum number_of_solutions* SOLUTIONS);

/**

@brief swit4 swaps x1 and x2 if x1 > x2

@param p_x1 - address of the first root

@param p_x2 - address of the second root

*/

void swit4(double* p_x1, double* p_x2);

/**

@brief testirovshik tests program that solves quations

@param p_x1 - address of the first root

@param p_x2 - address of the second root

@param SOLUTIONS - number of roots

*/

void testirovshik (double *p_x1, double *p_x2, enum number_of_solutions SOLUTIONS);



#endif // HEADER_H_INCLUDED
