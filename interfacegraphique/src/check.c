/*
** EPITECH PROJECT, 2017
** check
** File description:
** 
*/

#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include "my.h"
#include "struct.h"

void checkPosition(int newY, int newX, int new2Y, int new2X, Player *user)
{
	switch (mvinch(new2Y, new2X)) {
	case ' ':
		playerMove(newY, newX, user);
		break;
	case '-':
		move(user->position.y, user->position.x);
		break;
	default:
		move(user->position.y, user->position.x);
		break;
	}
}

void checkPositionPlayer2(int newYP2, int newXP2, int new2YP2, int new2XP2, Player *user2)
{
	switch (mvinch(new2YP2, new2XP2)) {
	case ' ':
		player2Move(newYP2, newXP2, user2);
		break;
	case '-':
		break;
	default:
		break;
	}
}

int checkPositionBall(int newYball, int newXball, int direction, Ball *ball, Player *user, Player *user2)
{
	switch (mvinch(newYball, newXball)) {
	case ' ':
		ballMove(newYball, newXball, ball);
		break;
	case '|':
		if (direction == 1 || direction == 2 || direction == 3) {
			resetplayer1(user);
			resetplayer2(user2);
			direction = resetball2(ball);
			user->score = user->score + 1;
			refresh();
		}
		else if (direction == 4 || direction == 5 || direction == 6) {
			resetplayer1(user);
			resetplayer2(user2);
			direction = resetball(ball);
			user2->score = user2->score + 1;
			refresh();
		}
		break;
	default:
		break;
	}
	return (direction);
}
