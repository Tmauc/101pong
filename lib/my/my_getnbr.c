/*
** EPITECH PROJECT, 2017
** my_getnbr.c
** File description:
** task05
*/

#include <unistd.h>
#include <stdlib.h>

int my_getnbr(char const *str)
{
	int i = 0 , j = 0 , compteur = 0 , nbr = 0;

	for (i = 0 ; str[i] != '\0' ; i++) {
		if (compteur > 8) {
			nbr = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9') {
			nbr = ((nbr*10) + str[i] - '0');
			compteur += 1;
			j += 1;
		}
		else if ((str[i] == '-' || str[i] == '+') && nbr == 0) {
			nbr = 0;
			j += 1;
		}
		else {
			for (i = 0 ; i < j ; i++) {
				if (str[i] == '-') {
					nbr = -nbr;
				}
			}
			return (nbr);
		}
	}
	for (i = 0; i < j ; i++) {
		if (str[i] == '-') {
			nbr = -nbr;
		}
	}
	return (nbr);
}
