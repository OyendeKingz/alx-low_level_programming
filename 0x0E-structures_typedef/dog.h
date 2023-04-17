#ifndef DOG_H
#define DOG_H

/**
 * dog_t - the typedef for struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog - struct that stores the information of a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: this struct caled "dog" that stores its name, age and the
 * name of the owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
