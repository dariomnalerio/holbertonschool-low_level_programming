#ifndef dog_a
#define dog_a
#include <stdio.h>
#include <stdlib.h>


/**
 * struct dog - Dog struct
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);

#endif
