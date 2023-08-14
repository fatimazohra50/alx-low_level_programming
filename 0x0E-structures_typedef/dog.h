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
};
typedef struct dog dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
