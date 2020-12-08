/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** my_itoa
*/

#include <stdlib.h>
#include "my.h"

char *my_itoa(int nb)
{
    int len = 0;
    int tmp = nb;
    char *str = NULL;

    while (tmp > 0) {
        tmp /= 10;
        len++;
    }
    str = malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return NULL;
    str[len] = '\0';
    while (len--) {
        str[len] = nb % 10  + '0';
        nb /= 10;
    }
    return (str);
}
