#include "header.h"
#define TESTCOUNT 6

void testirovshik (double* p_x1, double* p_x2, enum number_of_solutions SOLUTIONS)
{
    double t_a = 0;
    double t_b = 0;
    double t_c = 0;
    double t_x1 = 0;
    double t_x2 = 0;

    int t_n = 0;
    int i = 1;

    FILE *test;

    if ((test = fopen ("test.txt", "r")) == NULL)  // file not exist? DONE
    {
        printf("ERROR IN TEST FILE\n");
        exit(0);
    }


        // чтобы TESTCOUNT автоматом обновлялся при добавлении теста в файл DONE

        // что если файл с тестами битый? тест продет некорректно. проверить что считывание норм проходит


       while ((fscanf (test, "%lf %lf %lf %d %lf %lf", &t_a, &t_b, &t_c, &t_n, &t_x1, &t_x2)) == TESTCOUNT)
       {

            if (compare_zero (t_a))
            {
                linear_equation (t_b, t_c, p_x1, p_x2, &SOLUTIONS);
                if ((SOLUTIONS == t_n) && comporator (*p_x1, t_x1))
                {

                    printf("TEST#%d done correctly :)\n\n", i);
                }
                else{
                    printf("TEST#%d failed :(\nInput: a = %-3.2lf b = %-3.2lf c = %-3.2lf\n"
                    "True value: n = %-3d x1 = %-6.2lf\n"
                    "Test value: n = %-3d x1 = %-6.2lf\n\n",
                    i, t_a, t_b, t_c, t_n, t_x1, SOLUTIONS, *p_x1);

                    // more information DONE
                }
            }

            else
            {
                quadra_equation(t_a, t_b, t_c, p_x1, p_x2, &SOLUTIONS);

                if ((SOLUTIONS == t_n) && comporator(*p_x1, t_x1) && comporator(*p_x2, t_x2))
                {
                    printf("TEST#%d done correctly ;)\n\n", i);
                }

                else
                {
                    printf("TEST#%d failed((\nInput: a = %-3.2lf b = %-3.2lf c = %-3.2lf\n"
                    "Test value: n = %-3d x1 = %-6.2lf x2 = %-3.2lf\n"
                    "True value: n = %-3d x1 = %-6.2lf x2 = %-3.2lf\n\n",
                    i, t_a, t_b, t_c, t_n, t_x1, t_x2, SOLUTIONS, *p_x1, *p_x2);
                }
            }

            i++;

        }

    fclose(test);
}


