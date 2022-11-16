#include "dog.h"
/**
 * new_dog - function
 * @name: paeam
 * @age: param
 * @owner: para.
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
	{
		free(dogg);
		return (NULL);
	}

	dogg->name = malloc(sizeof(char) * strlen(name + 1));
	if (dogg->name == NULl)
	{
		free(dogg);
		return (NULL);
	}

	dogg->owner = malloc(sizeof(char) * strlen(owner + 1));
	if (dogg->owner == NULL)
	{
		free(dogg->name);
		free(dogg);
		return (NULL);
	}

	strcpy(dogg->name, name);
	dogg->age = age;
	strcpy(dogg->owner, owner);

	return (dogg);
}
