/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** window
*/

#include "rpg.h"

void manage_window_events(rpg_t *rpg)
{
    if (rpg->events->event.type == sfEvtClosed)
        sfRenderWindow_close(rpg->window->window);
}