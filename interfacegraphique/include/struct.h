/*
** EPITECH PROJECT, 2017
** struct.h
** File description:
** 
*/

#ifndef STRUCT_H
#define STRUCT_H

typedef struct Position
{
	int y;
	int x;
} Position;

typedef struct Player
{
	int score;
	Position position;
} Player;

typedef struct Ball
{
	int speed;
	Position position;
} Ball;

#endif
