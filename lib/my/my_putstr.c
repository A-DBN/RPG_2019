/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** print string
*/

#include <stddef.h>
#include <unistd.h>
#include "my.h"

int my_putstr(char const *str, int fd, int return_code)
{
    int str_len = 0;
    if (str == NULL) {
        return (1);
    }
    str_len = my_strlen(str);
    write(fd, str, str_len);
    return (return_code);
}