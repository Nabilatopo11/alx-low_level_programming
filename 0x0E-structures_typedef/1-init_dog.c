#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d : a pointer.
 * @name : a char.
 * @age : a float.
 * @owner: a char.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
