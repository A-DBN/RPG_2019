/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** stats
*/

#include <stdlib.h>
#include "rpg.h"

stats_t *init_stats_struct(void)
{
    stats_t *stats = malloc(sizeof(stats_t));

    if (stats == NULL)
        return (NULL);
    stats->hp = 100;
    stats->en_hp = 100;
    stats->level = 0;
    stats->strength = 0;
    stats->wisdom = 0;
    stats->xp = 0;
    stats->turn = 0;
    return (stats);
}
