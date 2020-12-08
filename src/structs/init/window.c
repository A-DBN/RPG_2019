/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** window
*/

#include <stdlib.h>
#include "rpg.h"

window_t *init_window_struct(void)
{
    window_t *window = malloc(sizeof(window_t));

    if (window == NULL)
        return (NULL);
    return (window);
}