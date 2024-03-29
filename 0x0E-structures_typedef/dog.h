#ifndef DOG_H
#define DOG_H

/*
 * Description: Header file that defines a new type of structure dog.
 */

/**
 * struct dog - A new type describing a dog.
 * @owner: The owner of the dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
