/*
** EPITECH PROJECT, 2018
** functions define
** File description:
** include functions
*/

#ifndef MY_FUNCTIONS
#define MY_FUNCTIONS

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>

void get_arg(char **av, variable *arg);
void newton(variable arg);
void bisection(variable arg);
void secant(variable arg);

#endif
