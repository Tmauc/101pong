/*
** EPITECH PROJECT, 2017
** 101pong.c
** File description:
** 101pong.c
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
#define PI 3.14159265359

int pos_v(plan3D vec)
{
	printf("the speed vector coordinates are :\n");
	printf("(x = %.2f ;y = %.2f ;z = %.2f)\n", vec.x, vec.y, vec.z);
	return (0);
}

int pos_f(plan3D pos, int n)
{
	printf("at time t+%i, ball coordinates will be :\n", n);
	printf("(x = %.2f ;y = %.2f ;z = %.2f)\n", pos.x, pos.y, pos.z);
	return (0);
}

int compute_angle(plan3D s_vec)
{
	double angle_rad;
	double angle;

	angle_rad = acos(s_vec.z/(sqrt(pow(s_vec.x, 2) + pow(s_vec.y, 2) + pow(s_vec.z, 2))));
	angle = 180 * (angle_rad - (PI/2)) / PI;
	angle = fabs(angle);
	printf("the insidence angle is :\n");
	printf("%.2f degrees\n", angle);
	return (0);
}

int calc_pong(plan3D pt1, plan3D pt2, int n)
{
	plan3D speed_v;
	plan3D pos_fnl;

	speed_v.x = pt2.x - pt1.x;
	speed_v.y = pt2.y - pt1.y;
	speed_v.z = pt2.z - pt1.z;
	pos_v(speed_v);
	pos_fnl.x = pt2.x + (n * speed_v.x);
	pos_fnl.y = pt2.y + (n * speed_v.y);
	pos_fnl.z = pt2.z + (n * speed_v.z);
	pos_f(pos_fnl, n);
	if (speed_v.z != 0 && ((-pt2.z)/speed_v.z) >= 0 && pt2.x != 0) {
		compute_angle(speed_v);
		return (0);
	} else {
		printf("the ball won't reach the bat.\n");
		return (0);
	}
	exit(84);
}
