#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog with specified name, age, and owner.
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog_t structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *name_copy, *owner_copy;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
	return (NULL);

	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
	free(new_dog_ptr);
	return (NULL);
	}

	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
	free(name_copy);
	free(new_dog_ptr);
	return (NULL);
	}

	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	new_dog_ptr->name = name_copy;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner_copy;

	return (new_dog_ptr);
}

