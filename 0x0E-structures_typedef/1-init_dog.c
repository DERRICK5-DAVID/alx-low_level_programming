#include <stdio.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to d
 * @name: pointer to name
 * @age: float age
 * @owner: char owner
 * Return: Always 0.
 */
void init_dog(char *name, float age, char *owner)
{
	struct dog *d;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
