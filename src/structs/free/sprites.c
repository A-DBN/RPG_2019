/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** sprites
*/

#include <stdlib.h>
#include "rpg.h"

void internal_free_sprites(rpg_t *rpg)
{
    (rpg->sprites->bg_menu) ? sfSprite_destroy(rpg->sprites->bg_menu) : 0;
    (rpg->sprites->intro_farm) ? sfSprite_destroy(rpg->sprites->intro_farm) : 0;
    (rpg->sprites->intro_fire) ? sfSprite_destroy(rpg->sprites->intro_fire) : 0;
    (rpg->sprites->intro_f) ? sfSprite_destroy(rpg->sprites->intro_f) : 0;
    (rpg->sprites->intro_i) ? sfSprite_destroy(rpg->sprites->intro_i) : 0;
    (rpg->sprites->intro_t) ? sfSprite_destroy(rpg->sprites->intro_t) : 0;
    (rpg->sprites->map1) ? sfSprite_destroy(rpg->sprites->map1) : 0;
    (rpg->sprites->map2) ? sfSprite_destroy(rpg->sprites->map2) : 0;
    (rpg->sprites->sp1) ? sfSprite_destroy(rpg->sprites->sp1) : 0;
    (rpg->sprites->sp2) ? sfSprite_destroy(rpg->sprites->sp2) : 0;
    (rpg->sprites->sp3) ? sfSprite_destroy(rpg->sprites->sp3) : 0;
    (rpg->sprites->sp4) ? sfSprite_destroy(rpg->sprites->sp4) : 0;
    (rpg->sprites->quest_on) ? sfSprite_destroy(rpg->sprites->quest_on) : 0;
    (rpg->sprites->quest_take) ? sfSprite_destroy(rpg->sprites->quest_take) : 0;
    (rpg->sprites->pnj) ? sfSprite_destroy(rpg->sprites->pnj) : 0;
    (rpg->sprites->roi) ? sfSprite_destroy(rpg->sprites->roi) : 0;
    internal_free_sprites_2(rpg);
    free(rpg->sprites);
}

void internal_free_sprites_2(rpg_t *rpg)
{
    (rpg->sprites->player_up) ? sfSprite_destroy(rpg->sprites->player_up) : 0;
    (rpg->sprites->player_down) ?
    sfSprite_destroy(rpg->sprites->player_down) : 0;
    (rpg->sprites->player_right) ?
    sfSprite_destroy(rpg->sprites->player_right) : 0;
    (rpg->sprites->player_left) ?
    sfSprite_destroy(rpg->sprites->player_left) : 0;
}