#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Estructura que define un perro
 * @name: Nombre del perro, tipo char *
 * @age: Edad del perro, tipo float
 * @owner: Dueño del perro, tipo char *
 *
 * Descripción: Estructura que almacena información básica sobre un perro.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
