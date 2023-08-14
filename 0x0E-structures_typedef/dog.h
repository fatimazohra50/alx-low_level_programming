#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog struct
 * @name: dog's name
 * @age: dog'sage
 * @owner: owner's name
 * Description: just a lone dog structin a big kitty world
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}
void init_dog(struct dog *d, char *name, float age, char *owner);;
#endif
