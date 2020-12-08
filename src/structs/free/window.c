/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** window
*/

#include <stdlib.h>
#include "rpg.h"

void internal_free_window(rpg_t *rpg)
{
    sfRenderWindow_destroy(rpg->window->window);
    free(rpg->window);
}