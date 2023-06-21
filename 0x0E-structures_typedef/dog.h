#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure repping a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif /* DOG_H */
