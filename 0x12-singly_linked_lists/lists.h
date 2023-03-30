#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(char *string);
int print_decimal(int value);
size_t print_list(const list_t *h);

#endif
