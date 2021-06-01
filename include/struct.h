/*
** EPITECH PROJECT, 2017
** variable.h
** File description:
** variable.h
*/

#ifndef STRUCT_H
#define STRUCT_H

typedef struct plan3D
{
	double x;
	double y;
	double z;
} plan3D;

int calc_pong(struct plan3D pt1, struct plan3D pt2, int n);

#endif
