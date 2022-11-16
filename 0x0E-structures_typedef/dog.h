#ifndef OG_H
#define OG_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct dog - Struct definition
 * @name: char
 * @age: decimal
 * @owner: char
 * Description: a struct defined to contain the above argumnts
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
