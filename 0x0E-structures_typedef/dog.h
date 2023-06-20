#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure repping a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: A long description for dog. Including every \
 * 				info about name, age and owner.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
