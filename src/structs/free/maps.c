/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** maps
*/

#include <stdlib.h>
#include "rpg.h"

void internal_free_maps(rpg_t *rpg)
{
    free(rpg->maps);
}