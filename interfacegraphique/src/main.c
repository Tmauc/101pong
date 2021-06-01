/*
** EPITECH PROJECT, 2017
** main
** File description:
** 
*/

#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include "my.h"
#include "struct.h"

void speedball(Ball *ball)
{
	switch (mvinch(ball->position.y, ball->position.x - 1)) {
		case ']':
			if (ball->speed > 300)
				ball->speed = ball->speed - 50;
			else
				ball->speed = ball->speed;
			break;
		default:
			break;
	}
	switch (mvinch(ball->position.y, ball->position.x + 1)) {
		case '[':
			if (ball->speed > 300)
				ball->speed = ball->speed - 50;
			else
				ball->speed = ball->speed;
			break;
		default:
			break;
	}
}

int ballfonction(int direction, Ball *ball, Player *user, Player *user2)
{
	direction = angle(direction, ball);
	direction = handleInputBall(direction, ball, user, user2);
	return (direction);
}

int main()
{
	Player *user;
	Player *user2;
	Ball *ball;
	int ch;
	int count = 1;
	int count2 = 0;
	int over = 0;
	int direction = randnumb();

	screenSetUp();
	mapSetUp();

	user2 = player2SetUp();
	user = playerSetUp();
	ball = ballSetUp();

	while ((ch = getch()) != 'a' && over == 0) {
		count2++;
		handleInputPlayer2(ch, user2);
		handleInput(ch, user);
		count++;
		if (count == ball->speed) {
			speedball(ball);
			direction = ballfonction(direction, ball, user, user2);
			count = 0;
		}
		over = gameover(user, user2);
		mvprintw(20, 84, "%i", user->score);
		mvprintw(20, 10, "%i", user2->score);
	}
	getch();
	endwin();
	return (0);
}
