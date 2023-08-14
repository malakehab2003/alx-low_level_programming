#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s);

/**
 * new_dog - make a new dog
 *
 * Return: a pointer to a new dog
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int n = _strlen(name), o = _strlen(owner), i = 0;
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if(new == NULL)
		return (NULL);

	new->name = malloc(sizeof(char) * (n + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	while(name[i] != 0)
	{
		new->name[i] = name[i];
		i++;
	}
	new->name[i] = '\0';
	new->age = age;
	new->owner = malloc(sizeof(char) * (o + 1));
	if (new->owner == NULL)
	{
		free(new);
		free(new->name);
		return (NULL);
	}
	i = 0;
	while(owner[i] != 0)
	{
		new->owner[i] = owner[i];
		i++;
	}
	new->owner[i] = '\0';
	return (new);
}

/**
 * _strlen - string length
 *
 * @s: the length of the string
 *
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
