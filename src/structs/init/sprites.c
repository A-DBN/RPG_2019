/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** sprites
*/

#include <stdlib.h>
#include "rpg.h"

sprite_t *init_sprites_struct(void)
{
    sprite_t *sprites = malloc(sizeof(sprite_t));

    if (sprites == NULL)
        return (NULL);
    sprites->bg_menu = NULL;
    sprites->intro_farm = NULL;
    sprites->intro_fire = NULL;
    sprites->intro_f = NULL;
    sprites->intro_i = NULL;
    sprites->intro_t = NULL;
    sprites->map1 = NULL;
    sprites->map2 = NULL;
    sprites->sp1 = NULL;
    sprites->sp2 = NULL;
    sprites->sp3 = NULL;
    sprites->sp4 = NULL;
    sprites->player = NULL;
    init_next_sprites(sprites);
    return (sprites);
}

void init_next_sprites(sprite_t *sprites)
{
    sprites->quest_take = NULL;
    sprites->quest_on = NULL;
    sprites->pnj = NULL;
    sprites->roi = NULL;
    sprites->player_down = NULL;
    sprites->player_left = NULL;
    sprites->player_right = NULL;
    sprites->player_up = NULL;
}
