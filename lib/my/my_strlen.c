/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** Return number of characters in the string passed as parameter.
*/

#include <stddef.h>

int my_strlen(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (i);
    while (str[i]) {
        i++;
    }
    return (i);
}