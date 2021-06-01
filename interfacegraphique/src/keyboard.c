/*
** EPITECH PROJECT, 2017
** keyboard
** File description:
** 
*/

#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include "my.h"
#include "struct.h"

void handleInput(int input, Player *user)
{
	int newY;
	int newX;
	int new2Y;
	int new2X;

	refresh();
	switch(input) {
	case 'z':
	case 'Z':
		newY = user->position.y - 1;
		newX = user->position.x;
		new2Y = user->position.y - 2;
		new2X = user->position.x;
		break;
	case 's':
	case 'S':
		newY = user->position.y + 1;
		newX = user->position.x;
		new2Y = user->position.y + 2;
		new2X = user->position.x;
		break;
	default:
		newY = user->position.y;
		newX = user->position.x;
		new2Y = user->position.y;
		new2X = user->position.x;
		break;
	}
	checkPosition(newY, newX, new2Y, new2X, user);
}

void handleInputPlayer2(int input, Player *user2)
{
	int newYP2;
	int newXP2;
	int new2YP2;
	int new2XP2;

	refresh();
	switch(input)
	{
	case 'p':
	case 'P':
		newYP2 = user2->position.y - 1;
		newXP2 = user2->position.x;
		new2YP2 = user2->position.y - 2;
		new2XP2 = user2->position.x;
		break;
	case 'm':
	case 'M':
		newYP2 = user2->position.y + 1;
		newXP2 = user2->position.x;
		new2YP2 = user2->position.y + 2;
		new2XP2 = user2->position.x;
		break;
	default:
		newYP2 = user2->position.y;
		newXP2 = user2->position.x;
		new2YP2 = user2->position.y;
		new2XP2 = user2->position.x;
		break;
	}
	checkPositionPlayer2(newYP2, newXP2, new2YP2, new2XP2, user2);
}

int handleInputBall(int direction, Ball *ball, Player *user, Player *user2)
{
	int newYball;
	int newXball;

	refresh();
	if (direction == 1) {
		newYball = ball->position.y - 1;
		newXball = ball->position.x - 1;
	}
	if (direction == 2) {
		newYball = ball->position.y;
		newXball = ball->position.x - 1;
	}
	if (direction == 3) {
		newYball = ball->position.y + 1;
		newXball = ball->position.x - 1;
	}
	if (direction == 4) {
		newYball = ball->position.y - 1;
		newXball = ball->position.x + 1;
	}
	if (direction == 5) {
		newYball = ball->position.y;
		newXball = ball->position.x + 1;
	}
	if (direction == 6) {
		newYball = ball->position.y + 1;
		newXball = ball->position.x + 1;
	}
	direction = checkPositionBall(newYball, newXball, direction, ball, user, user2);
	return (direction);
}
