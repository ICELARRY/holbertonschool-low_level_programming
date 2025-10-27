#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

/* Prototype for new_dog function */
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
