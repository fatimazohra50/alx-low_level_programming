#include <stdlib.h>
#ionclude "dog.h"
/**
 * _strlen - a function that gets a length of string
 * @str: the string to get the length
 * Return: length of @str
 */
int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
/**
 * _strcop - a function that returns @de with a copy of a string from @src
 * @src: string to copy
 * @dest: copy string to here
 * Return: @dest
 */
char *_strcop(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - a function that creates a new dog
 * @name: name of dog
 * @owner:dog owner
 * @age: age of dog
 * Return: struct pointer dog NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcop(dog->name);
	dog->age = age;
	dog->owner = _strcop(dog->owner, owner);
	return (dog);
}
