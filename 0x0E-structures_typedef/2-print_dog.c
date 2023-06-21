#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog -  initialize a variable of type struct dog
 * struct dog - Structure repping a dog
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(98);
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}

	if (d->age == 0)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
}
