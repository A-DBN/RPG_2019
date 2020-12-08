/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** clocks
*/

#include <stdlib.h>
#include "rpg.h"

void internal_free_clocks(rpg_t *rpg)
{
    (rpg->clocks->clock1) ? sfClock_destroy(rpg->clocks->clock1) : 0;
    free(rpg->clocks);
}
