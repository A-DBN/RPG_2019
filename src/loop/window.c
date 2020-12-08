/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** window
*/

#include "rpg.h"

int loop_window(rpg_t *rpg)
{
    while (sfRenderWindow_isOpen(rpg->window->window)) {
        update_display(rpg);
        while (sfRenderWindow_pollEvent(rpg->window->window,
        &rpg->events->event)) {
            events_handler(rpg);
        }
    }
    return (0);
}