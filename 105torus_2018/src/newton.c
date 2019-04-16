/*
** EPITECH PROJECT, 2018
** 105torus 2018
** File description:
** main 105torus
*/

#include "../include/my_lib.h"
#include "../include/my_struct.h"
#include "../include/my_functions.h"

void bisection(variable arg)
{
    double f_x;
    double s_x;
    double x;
    double point_a = 0;
    double point_b = 1;
    int i = 1;

    while (round(point_a * pow(10, arg.n)) != round(point_b * pow(10, arg.n))) {
        x = (point_a + point_b) / 2;
        if (i <= arg.n)
            printf("x = %.*f\n", i, x);
        else
            printf("x = %.*f\n", arg.n, x);
        f_x = (arg.a4 * pow(x, 4)) + (arg.a3 * pow(x, 3)) + (arg.a2 * pow(x, 2)) + (arg.a1 * x) + arg.a0;
        s_x = ((arg.a4 * pow(point_a, 4)) + (arg.a3 * pow(point_a, 3)) + (arg.a2 * pow(point_a, 2)) + (arg.a1 * point_a) + arg.a0);
        if (f_x * s_x < 0)
            point_b = x;
        else
            point_a = x;
        i++;
    }
}

void newton(variable arg)
{
    double x1 = 0.5;
    double x2;
    double f_x;
    double s_x;
    int i = 0;

    while (round(x1 * pow(10, arg.n)) != round(x2 * pow(10, arg.n))) {
        f_x = (arg.a4 * pow(x1, 4)) + (arg.a3 * pow(x1, 3)) + (arg.a2 * pow(x1, 2))+ (arg.a1 * x1) + arg.a0;
        s_x = (4 * (arg.a4 * pow(x1, 3))) + (3 * (arg.a3 * pow(x1, 2))) + (2 * (arg.a2 * x1)) + arg.a1;
        if (s_x == 0)
            exit(84);
        x2 = x1 - (f_x / s_x);
        if (i == 0)
            printf("x = %.1f\n", x2);
        printf("x = %.*f\n", arg.n, x2);
        x1 = x2;
        i++;
    }
}

void secant(variable arg)
{
    double point_a = 0;
    double point_b = 1;
    double f_x;
    double s_x;
    double x;
    int i = 0;

    while (round(point_a * pow(10, arg.n)) != round(point_b * pow(10, arg.n))) {
        f_x = (arg.a4 * pow(point_a, 4)) + (arg.a3 * pow(point_a, 3)) + (arg.a2 * pow(point_a, 2)) + (arg.a1 * point_a) + arg.a0;
        s_x = (arg.a4 * pow(point_b, 4)) + (arg.a3 * pow(point_b, 3)) + (arg.a2 * pow(point_b, 2)) + (arg.a1 * point_b) + arg.a0;
        if ((s_x - f_x) == 0)
            exit(84);
        x = point_b - ((s_x) * (point_b - point_a) / (s_x - f_x));
        if (i == 0)
            printf("x = %.1f\n", x);
        else
            printf("x = %.*f\n", arg.n, x);
        point_a = point_b;
        point_b = x;
        i++;
    }
}