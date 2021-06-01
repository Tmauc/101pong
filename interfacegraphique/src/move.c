/*
** EPITECH PROJECT, 2017
** move
** File description:
** 
*/

#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include "my.h"
#include "struct.h"

void playerMove(int y, int x, Player * user)
{
	mvprintw(user->position.y, user->position.x, " ");
	mvprintw(user->position.y - 1, user->position.x, " ");
	mvprintw(user->position.y + 1, user->position.x, " ");

	user->position.y = y;
	user->position.x = x;

	mvprintw(user->position.y, user->position.x, "]");
	mvprintw(user->position.y - 1, user->position.x, "]");
	mvprintw(user->position.y + 1, user->position.x, "]");
	refresh();
}

void player2Move(int y, int x, Player * user2)
{
	mvprintw(user2->position.y, user2->position.x, " ");
	mvprintw(user2->position.y - 1, user2->position.x, " ");
	mvprintw(user2->position.y + 1, user2->position.x, " ");

	user2->position.y = y;
	user2->position.x = x;

	mvprintw(user2->position.y, user2->position.x, "[");
	mvprintw(user2->position.y - 1, user2->position.x, "[");
	mvprintw(user2->position.y + 1, user2->position.x, "[");
	refresh();
}

void ballMove(int y, int x, Ball * ball)
{
	mvprintw(ball->position.y, ball->position.x, " ");

	ball->position.y = y;
	ball->position.x = x;

	mvprintw(ball->position.y, ball->position.x, "o");
	refresh();
}
