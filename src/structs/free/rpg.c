/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** rpg
*/

#include <stdlib.h>
#include "rpg.h"

void my_free_rpg(rpg_t *rpg)
{
    internal_free_clocks(rpg);
    internal_free_events(rpg);
    internal_free_inventory(rpg);
    internal_free_maps(rpg);
    internal_free_player(rpg);
    internal_free_sprites(rpg);
    internal_free_stats(rpg);
    internal_free_text(rpg);
    internal_free_window(rpg);
    free(rpg);
}