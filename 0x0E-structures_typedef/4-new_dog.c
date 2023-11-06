#include <stdlib.h>
#include "dog.h"

/**
 * create_dog - allocates memory for a new dog
 * @name: name of the dog
 * @owner: owner of the dog
 * @name_len: length of the name
 * @owner_len: length of the owner
 *
 * Return: pointer to the newly created dog_t structure
 */
dog_t *create_dog(char *name, char *owner, unsigned int name_len, unsigned int owner_len)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(name_len * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(owner_len * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	return (dog);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_len, owner_len, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	name_len = _strlen(name) + 1;
	owner_len = _strlen(owner) + 1;

	dog = create_dog(name, owner, name_len, owner_len);

	if (dog == NULL)
		return (NULL);

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
