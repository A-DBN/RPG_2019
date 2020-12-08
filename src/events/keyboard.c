/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** keyboard
*/

#include "rpg.h"

void manage_keyboard_events(rpg_t *rpg)
{
    if (rpg->events->event.key.code == sfKeyEscape) {
        if (rpg->maps->map == 0)
            sfRenderWindow_close(rpg->window->window);
        if (rpg->maps->map == 55) {
            rpg->maps->map = 1;
            rpg->maps->intro = 1;
            return;
        }
        if (rpg->maps->map != 99) {
            rpg->maps->prev_map = rpg->maps->map;
            rpg->maps->map = 99;
        } else if (rpg->maps->map == 99)
            rpg->maps->map = rpg->maps->prev_map;
    }
}
