/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** weapons
*/

#include <stdlib.h>
#include "rpg.h"

void internal_free_weapons(rpg_t *rpg)
{
    free(rpg->inventory->weapons);
}