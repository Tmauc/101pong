/*
** EPITECH PROJECT, 2017
** angle
** File description:
** 
*/

#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include "my.h"
#include "struct.h"

int angle(int direction, Ball *ball)
{
	if (direction == 1) { //pad 1 balle en bah
		if (mvinch(ball->position.y - 1, ball->position.x - 1) == ' ' && mvinch(ball->position.y, ball->position.x - 1) == ']')
			direction = direction + 3;
		if (mvinch(ball->position.y - 1, ball->position.x - 1) == ']' && mvinch(ball->position.y + 1, ball->position.x - 1) == ']')
			direction = direction + 3;
		if (mvinch(ball->position.y + 1, ball->position.x - 1) == ' ' && mvinch(ball->position.y, ball->position.x - 1) == ']')
			direction = direction + 4;
		if (mvinch(ball->position.y, ball->position.x - 1) == ' ')
			direction = direction;
		if (mvinch(ball->position.y - 1, ball->position.x) == '-')
			direction = direction + 2;
		return (direction);
	}
	if (direction == 2) { //pad 1 balle droit
		if (mvinch(ball->position.y - 1, ball->position.x - 1) == ' ' && mvinch(ball->position.y, ball->position.x - 1) == ']')
			direction = direction + 2;
		if (mvinch(ball->position.y - 1, ball->position.x - 1) == ']' && mvinch(ball->position.y + 1, ball->position.x - 1) == ']')
			direction = direction + 3;
		if (mvinch(ball->position.y + 1, ball->position.x - 1) == ' ' && mvinch(ball->position.y, ball->position.x - 1) == ']')
			direction = direction + 4;
		if (mvinch(ball->position.y, ball->position.x - 1) == ' ')
			direction = direction;
		return (direction);
	}
	if (direction == 3) { //pad 1 balle en haut
		if (mvinch(ball->position.y - 1, ball->position.x - 1) == ' ' && mvinch(ball->position.y, ball->position.x - 1) == ']')
			direction = direction + 2;
		if (mvinch(ball->position.y - 1, ball->position.x - 1) == ']' &&mvinch(ball->position.y + 1, ball->position.x - 1) == ']')
			direction = direction + 3;
		if (mvinch(ball->position.y + 1, ball->position.x - 1) == ' ' && mvinch(ball->position.y, ball->position.x - 1) == ']')
			direction = direction + 3;
		if (mvinch(ball->position.y, ball->position.x - 1) == ' ')
			direction = direction;
		if (mvinch(ball->position.y + 1, ball->position.x) == '-')
			direction = direction - 2;
		return (direction);
	}
	if (direction == 4) { //pad 2 balle en bah
		if (mvinch(ball->position.y - 1, ball->position.x + 1) == ' ' && mvinch(ball->position.y, ball->position.x + 1) == '[')
			direction = direction - 3;
		if (mvinch(ball->position.y - 1, ball->position.x + 1) == '[' && mvinch(ball->position.y + 1, ball->position.x + 1) == '[')
			direction = direction - 3;
		if (mvinch(ball->position.y + 1, ball->position.x + 1) == ' ' && mvinch(ball->position.y, ball->position.x + 1) == '[')
			direction = direction - 2;
		if (mvinch(ball->position.y, ball->position.x + 1) == ' ')
			direction = direction;
		if (mvinch(ball->position.y - 1, ball->position.x) == '-')
			direction = direction + 2;
		return (direction);
	}
	if (direction == 5) { //pad 2 balle droit
		if (mvinch(ball->position.y - 1, ball->position.x + 1) == ' ' && mvinch(ball->position.y, ball->position.x + 1) == '[')
			direction = direction - 4;
		if (mvinch(ball->position.y - 1, ball->position.x + 1) == '[' && mvinch(ball->position.y + 1, ball->position.x + 1) == '[')
			direction = direction - 3;
		if (mvinch(ball->position.y + 1, ball->position.x + 1) == ' ' && mvinch(ball->position.y, ball->position.x + 1) == '[')
			direction = direction - 2;
		if (mvinch(ball->position.y, ball->position.x + 1) == ' ')
			direction = direction;
		return (direction);
	}
	if (direction == 6) { //pad 2 balle en haut
		if (mvinch(ball->position.y - 1, ball->position.x + 1) == ' ' && mvinch(ball->position.y, ball->position.x + 1) == '[')
			direction = direction - 4;
		if (mvinch(ball->position.y - 1, ball->position.x + 1) == '[' && mvinch(ball->position.y + 1, ball->position.x + 1) == '[')
			direction = direction - 3;
		if (mvinch(ball->position.y + 1, ball->position.x + 1) == ' ' && mvinch(ball->position.y, ball->position.x + 1) == '[')
			direction = direction - 3;
		if (mvinch(ball->position.y, ball->position.x + 1) == ' ')
			direction = direction;
		if (mvinch(ball->position.y + 1, ball->position.x) == '-')
			direction = direction - 2;
		return (direction);
	}
	return (direction);
}
