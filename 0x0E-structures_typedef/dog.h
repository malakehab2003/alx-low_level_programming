#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * dog_t - typedef for struct dog
*/
typedef struct dog dog_t;

#endif
