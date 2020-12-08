/*
** EPITECH PROJECT, 2019
** my_lib
** File description:
** my_calloc
*/

#include <stddef.h>
#include <stdlib.h>
#include "my.h"

void *my_calloc(int nmemb, int size)
{
    void *ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return (NULL);
    my_memset(ptr, 0, nmemb * size);
    return (ptr);
}