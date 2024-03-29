#ifndef MAIN_H
#define MAIN_H

char  *create_array(unsigned int, char c);
char  *_strdup(char *str);
char  *str_concat(char *s1, char *s2);
int  **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
void util(char **, char *);
void create_word(char **, char *, int, int, int);

#endif
