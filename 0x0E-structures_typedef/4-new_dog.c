#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - The length of a string
 * @s: The string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;
	
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - copies the string pointed to
 * @dest: pointer to the buffer where we copy
 * @src: the string
 *
 * Return: pointer to dest
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strlen(dog->name, name);
	_strlen(dog->owner, owner);
	dog->age = age;

	return (dog);
}
