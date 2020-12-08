/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** update_mouse_pos
*/

#include "rpg.h"
#include <stdio.h>

void update_mouse_pos(rpg_t *rpg)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(rpg->window->window);

    rpg->events->x = mouse.x;
    rpg->events->y = mouse.y;
}
