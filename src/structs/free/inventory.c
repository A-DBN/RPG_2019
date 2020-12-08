/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** inventory
*/

#include <stdlib.h>
#include "rpg.h"

void internal_free_inventory(rpg_t *rpg)
{
    internal_free_weapons(rpg);
    free(rpg->inventory);
}