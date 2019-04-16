/*
** EPITECH PROJECT, 2018
** 105torus 2018
** File description:
** main 105torus
*/

#include "../include/my_lib.h"
#include "../include/my_struct.h"
#include "../include/my_functions.h"

void get_arg(char **av, variable *arg)
{
    arg->a0 = atoi(av[2]);
    arg->a1 = atoi(av[3]);
    arg->a2 = atoi(av[4]);
    arg->a3 = atoi(av[5]);
    arg->a4 = atoi(av[6]);
    arg->n = atoi(av[7]);
}