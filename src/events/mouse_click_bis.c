/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** mouse_click_bis
*/

#include "rpg.h"

void manage_mouse_click_map_666(rpg_t *rpg)
{
    if (rpg->stats->turn == 1) {
        if ((rpg->events->x > 1100 && rpg->events->x < 1430) &&
        (rpg->events->y > 936 && rpg->events->y < 1020)) {
            rpg->stats->en_hp -= 50;
            rpg->stats->turn = 0;
        }
        if ((rpg->events->x > 1475 && rpg->events->x < 1880) &&
        (rpg->events->y > 930 && rpg->events->y < 1030)) {
            if (rpg->stats->hp < 100)
                rpg->stats->hp += 30;
            else
                rpg->stats->hp += 20;
            rpg->stats->turn = 0;
        }
    }
}
