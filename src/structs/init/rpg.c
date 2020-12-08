/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** rpg
*/

#include <stdlib.h>
#include "rpg.h"

rpg_t *init_rpg_struct(void)
{
    rpg_t *rpg = malloc(sizeof(rpg_t));

    if (! rpg )
        return (NULL);
    rpg->inventory = init_inventory_struct();
    rpg->stats = init_stats_struct();
    rpg->player = init_player_struct();
    rpg->maps = init_maps_struct();
    rpg->window = init_window_struct();
    rpg->sprites = init_sprites_struct();
    rpg->clocks = init_clocks_struct();
    rpg->events = init_events_struct();
    rpg->text = init_text_struct();
    if (! rpg || ! rpg->inventory || ! rpg->stats || ! rpg->player ||
    ! rpg->maps || ! rpg->window || ! rpg->sprites || ! rpg->clocks ||
    ! rpg->events || ! rpg->text)
        return (NULL);
    return (rpg);
}
