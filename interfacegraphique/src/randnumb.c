/*
** EPITECH PROJECT, 2017
** randnum
** File description:
** 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randnumb()
{
	srand(time(NULL));
	int nbgen=rand()%6+1;
	return (nbgen);
}
