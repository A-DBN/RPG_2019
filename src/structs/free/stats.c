/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** stats
*/

#include <stdlib.h>
#include "rpg.h"

void internal_free_stats(rpg_t *rpg)
{
    free(rpg->stats);
}