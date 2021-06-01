/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** 
*/

#include "struct.h"

#ifndef MY_H
#define MY_H

int mapSetUp();
int winplayer1();
int winplayer2();
int randnumb();
int screenSetUp();
Player *playerSetUp();
Player *player2SetUp();
Ball *ballSetUp();
void handleInput(int input, Player *user);
void handleInputPlayer2(int input, Player *user2);
int handleInputBall(int direction, Ball *ball, Player *user, Player *user2);
void checkPosition(int newY, int newX, int new2Y, int new2X, Player *user);
void checkPositionPlayer2(int newYP2, int newXP2, int new2YP2, int new2XP2, Player *user2);
int checkPositionBall(int newYball, int newXball, int direction, Ball *ball, Player *user, Player *user2);
void playerMove(int y, int x, Player *user);
void player2Move(int y, int x, Player * ser2);
void ballMove(int y, int x, Ball *ball);
void resetplayer1(Player *user);
void resetplayer2(Player *user2);
int resetball(Ball *ball);
int resetball2(Ball *ball);
int gameover(Player *user, Player *user2);
int angle(int direction, Ball *ball);

#endif
