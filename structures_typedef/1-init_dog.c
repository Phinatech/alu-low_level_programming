#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "John");

    printf("Name: %s\n", my_dog.name);
    printf("Age: %.1f\n", my_dog.age);
    printf("Owner: %s\n", my_dog.owner);

    return (0);
}
