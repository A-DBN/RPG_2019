/*
** EPITECH PROJECT, 2019
** my_lib
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

void *my_calloc(int nmemb, int size);
int my_is_number(char letter);
char *my_itoa(int nb);
void *my_memset(char *s, int c, int n);
void my_putchar(char c);
int my_putstr(char const *str, int fd, int return_code);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_strcmp(char *s1, char *s2);
int my_strlen(char const *str);

#endif /* !MY_H_ */
