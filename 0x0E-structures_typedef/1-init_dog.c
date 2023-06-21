#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * struct dog - Structure repping a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int len;
	int len2;

	len = _strlen(name);
	len2 = _strlen(owner);

	d->name = malloc(sizeof(char*) * len);
	_strcpy(d->name, name);

	d->age = age;

	d->owner = malloc(sizeof(char*) * (len2));
	_strcpy(d->owner, owner);
}

/**
 * _strlen - Returns the length of a string
 *@s: Accepts values
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int x;

	x = 0;
	while (*s != '\0')
	{
		x++;
		s++;
	}

	return (x);
}

/**
 *_strcpy - check the code
 *@dest: The buffer where the string is to be copied to
*@src: Pointer to the string to be copied
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	char *p_dest;

	p_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (p_dest);
}
