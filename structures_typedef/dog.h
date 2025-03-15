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
#endif /* DOG_H */
