/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** events
*/

#include <stdlib.h>
#include "rpg.h"

void internal_free_events(rpg_t *rpg)
{
    free(rpg->events);
}