#include <stdlib.h>
#include "dog.h"
int _strlen(const char *str)
{
	int l = 0;
	while (*str++)
		l++;
	return (l);
}
char*_strcopy(char *dest,char *src)
{
	int i;
	for(i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	if (!name || age < 0|| !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).oqner == NULL)
	{
		free(dof->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner);
	return (dog);
}
