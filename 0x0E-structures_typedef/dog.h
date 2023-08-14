#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure representing a dog's information.
 * @name: The name of the dog (a string).
 * @age: The age of the dog (a floating-point number).
 * @owner: The owner of the dog (a string).
 *
 * Description: This structure defines the attributes of a dog,
 * including its name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t; 
/* Define a new type dog_t as an alias for struct dog */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif /* DOG_H */

