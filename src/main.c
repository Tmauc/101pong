/*
** EPITECH PROJECT, 2017
** main_101_pong.c
** File description:
** main_101_pong.c
*/

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <errno.h>
#include <stdarg.h>
#include <math.h>
#include "struct.h"
#include "my.h"

int main(int ac, char **av)
{
	int n;
	plan3D t_1;
	plan3D t_2;

	if ((ac < 8) || (ac > 8)) {
		printf("ERROR : not good arguments\n");
		return (84);
	}
	t_1.x = atof(av[1]);
	t_1.y = atof(av[2]);
	t_1.z = atof(av[3]);
	t_2.x = atof(av[4]);
	t_2.y = atof(av[5]);
	t_2.z = atof(av[6]);
	n = my_getnbr(av[7]);
	if (n < 0) {
		printf("ERROR n < 0\n");
		return (1);
	}
	calc_pong(t_1, t_2, n);
}
