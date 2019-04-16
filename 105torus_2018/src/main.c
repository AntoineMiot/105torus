/*
** EPITECH PROJECT, 2018
** 105torus 2018
** File description:
** main 105torus
*/

#include "../include/my_lib.h"
#include "../include/my_struct.h"
#include "../include/my_functions.h"

void error(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        printf("USAGE\n\t./105torus opt a0 a1 a2 a3 a4 n\n\n");
        printf("DESCRIPTION\n");
        printf("\topt\tmethod option:\n");
        printf("\t\t\t1 for the bisection method\n");
        printf("\t\t\t2 for Newton's method\n");
        printf("\t\t\t3 for the secant method\n");
        printf("\ta[0-4]\tcoefficients of the equation\n");
        printf("\tn\tprecision (the application of the");
        printf("polynomial to the solution should be smaller than 10^-n)\n");
        exit(84);
    }
    if (ac != 8) {
        printf("Bad number of arguments.\nS");
        exit(84);
    }
    if (!(atoi(av[1]) >= 1 && atoi(av[1]) <= 3)) {
        printf("Invalid arg1, please read the -h.\n");
        exit(84);
    }
    if (atoi(av[7]) <= 0) {
        printf("Invalid precision, please read the -h.\n");
        exit(84);
    }
}

int main(int ac, char **av)
{
    struct variable arg;
    error(ac, av);
    get_arg(av, &arg);
    switch (atoi(av[1])) {
    case 1 :
        bisection(arg);
        break;
    case 2 :
        newton(arg);
        break;
    case 3 :
        secant(arg);
        break;
    }
    return 0;
}
