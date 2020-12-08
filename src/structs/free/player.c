/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** player
*/

#include <stdlib.h>
#include "rpg.h"

void internal_free_player(rpg_t *rpg)
{
    free(rpg->player);
}