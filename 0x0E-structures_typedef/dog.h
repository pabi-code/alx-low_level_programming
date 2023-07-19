#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's details
 * @name: First member of struct
 * @age: Second member of struct
 * @owner: Third member of struct
*/
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * dogs_de - typedef for struct dog
*/
typedef struct dog dogs_de;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dogs_de *new_dog(char *name, float age, char *owner);
void free_dog(dogs_de *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
* dog_t - typedef for struct dog
*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
