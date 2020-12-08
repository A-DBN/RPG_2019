/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** maps
*/

#include <stdlib.h>
#include "rpg.h"

maps_t *init_maps_struct(void)
{
    maps_t *maps = malloc(sizeof(maps_t));

    if (maps == NULL)
        return (NULL);
    maps->map = 0;
    maps->prev_map = 0;
    maps->intro = 0;
    maps->quest_s = 0;
    maps->king_s = 0;
    maps->questd = 0;
    maps->quest_status = 0;
    return (maps);
}
