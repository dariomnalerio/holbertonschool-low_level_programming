#include "dog.h"

/**
 * new_dog - Creates a dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: Dog! :D
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name != NULL && owner != NULL)
	{
		newdog = malloc(sizeof(dog_t));

		if (newdog == NULL)
			return (NULL);

		newdog->name = _strdup(name);
		if (newdog->name == NULL)
		{
			free(newdog);
			return (NULL);
		}

		newdog->owner = _strdup(owner);
		if (newdog->owner == NULL)
		{
			free(newdog->name);
			free(newdog);
			return (NULL);
		}
		newdog->age = age;
	}
	return (newdog);
}

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 *
 * @str: String given as a parameter
 *
 * Return: If str == NULL or insufficent memory is available: NULL
 * Otherwise: a pointer to the duplicated string
*/

char *_strdup(char *str)
{
	unsigned int i, j;
	char *array;

	if (str == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
	{
	}

	array = malloc(sizeof(char) * i + 1);

	if (array == NULL)
		return (NULL);

	for (j = 0 ; j <= i ; j++)
		array[j] = str[j];

	return (array);
}
