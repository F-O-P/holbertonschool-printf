#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct dog - dogs info
 * @name: get dog name
 * @age: get dogs age
 * @owner: get dogs owner name
 *
 * Description: get all dogs information
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

int _printf(const char *format, ...);
int _putchar(char c);

#endif
