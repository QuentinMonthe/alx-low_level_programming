#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define a type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * This struct define the proporties of a dog in program
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* DOG_H */
