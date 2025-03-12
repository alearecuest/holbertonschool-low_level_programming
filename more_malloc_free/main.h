#ifndef MAIN_H
#define MAIN_H

char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
int is_prime_number(int n);
int _sqrt_recursion(int n);
int _pow_recursion(int x, int y);
int factorial(int n);
int _strlen_recursion(char *s);
void _print_rev_recursion(char *s);
void _puts_recursion(char *s);
int _putchar(char c);

#endif /* MAIN_H */
