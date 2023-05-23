#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *dog_struc)
{
	if (dog_struc == NULL)
		return;

	if (dog_struc->name == NULL)
		dog_struc->name = "(nil)";
	if (dog_struc->owner == NULL)
		dog_struc->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", dog_struc->name, dog_struc->age, dog_struc->owner);
}
