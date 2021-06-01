/*
** EPITECH PROJECT, 2017
** setup
** File description:
** 
*/

#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include "my.h"
#include "struct.h"

Player *playerSetUp()
{
	Player *newPlayer;
	newPlayer = malloc(sizeof(Player));
	newPlayer->position.x = 22;
	newPlayer->position.y = 20;
	newPlayer->score = 0;

	mvprintw(newPlayer->position.y, newPlayer->position.x, "]");
	mvprintw(newPlayer->position.y - 1, newPlayer->position.x, "]");
	mvprintw(newPlayer->position.y + 1, newPlayer->position.x, "]");
	return newPlayer;
}

Player *player2SetUp()
{
	Player *newPlayer2;
	newPlayer2 = malloc(sizeof(Player));
	newPlayer2->position.x = 73;
	newPlayer2->position.y = 20;
	newPlayer2->score = 0;

	mvprintw(newPlayer2->position.y, newPlayer2->position.x, "[");
	mvprintw(newPlayer2->position.y - 1, newPlayer2->position.x, "[");
	mvprintw(newPlayer2->position.y + 1, newPlayer2->position.x, "[");
	return newPlayer2;
}

Ball *ballSetUp()
{
	Ball *newball;
	newball = malloc(sizeof(Ball));
	newball->position.x = 47;
	newball->position.y = 20;
	newball->speed = 2100;

	mvprintw(newball->position.y, newball->position.x, "o");
	return newball;
}
