/*
** EPITECH PROJECT, 2017
** reset
** File description:
** 
*/

#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include "my.h"
#include "struct.h"

void resetplayer1(Player *user)
{
	mvprintw(user->position.y, user->position.x, " ");
	mvprintw(user->position.y - 1, user->position.x, " ");
	mvprintw(user->position.y + 1, user->position.x, " ");

	user->position.y = 20;
	user->position.x = 22;

	mvprintw(user->position.y, user->position.x, "]");
	mvprintw(user->position.y - 1, user->position.x, "]");
	mvprintw(user->position.y + 1, user->position.x, "]");
	refresh();
}

void resetplayer2(Player *user2)
{
	mvprintw(user2->position.y, user2->position.x, " ");
	mvprintw(user2->position.y - 1, user2->position.x, " ");
	mvprintw(user2->position.y + 1, user2->position.x, " ");

	user2->position.y = 20;
	user2->position.x = 73;

	mvprintw(user2->position.y, user2->position.x, "[");
	mvprintw(user2->position.y - 1, user2->position.x, "[");
	mvprintw(user2->position.y + 1, user2->position.x, "[");

	refresh();
}

int resetball(Ball *ball)
{
	int direction = 0;

	mvprintw(ball->position.y, ball->position.x, " ");
	ball->position.y = 20;
	ball->position.x = 23;
	mvprintw(ball->position.y, ball->position.x, "o");
	direction = direction + 5;
	refresh();
	return (direction);
}

int resetball2(Ball *ball)
{
	int direction = 0;

	mvprintw(ball->position.y, ball->position.x, " ");
	ball->position.y = 20;
	ball->position.x = 72;
	mvprintw(ball->position.y, ball->position.x, "o");
	direction = direction + 2;
	ball->speed = 2100;
	refresh();
	return (direction);
}
