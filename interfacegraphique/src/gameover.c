/*
** EPITECH PROJECT, 2017
** gameover
** File description:
** 
*/

#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include "my.h"
#include "struct.h"

int gameover(Player *user, Player *user2)
{
	if (user->score >= 5 || user2->score >= 5)
		return (1);
	else
		return(0);
}
