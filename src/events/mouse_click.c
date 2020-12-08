/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** mouse_click
*/

#include "rpg.h"

void manage_mouse_click(rpg_t *rpg)
{
    update_mouse_pos(rpg);
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        while (sfMouse_isButtonPressed(sfMouseLeft)) {}
        if (rpg->maps->map == 0)
            manage_mouse_click_map_0(rpg);
        if (rpg->maps->map == 99)
            manage_mouse_click_map_99(rpg);
        if (rpg->maps->map == 1)
            manage_mouse_click_map_1(rpg);
        if (rpg->maps->map == 2)
            manage_mouse_click_map_2(rpg);
        if (rpg->maps->map == 666)
            manage_mouse_click_map_666(rpg);
    }
}

void manage_mouse_click_map_0(rpg_t *rpg)
{
    if ((rpg->events->x > 600 && rpg->events->x < (600 + 570)) &&
    (rpg->events->y > 250 && rpg->events->y < (250 + 279))) {
        rpg->clocks->clock1 = sfClock_create();
        if (rpg->maps->intro == 0) {
            rpg->maps->map = 55;
            rpg->maps->intro = 1;
        } else
            rpg->maps->map = rpg->maps->prev_map;
    }
    if ((rpg->events->x > 600 && rpg->events->x < (600 + 570)) &&
    (rpg->events->y > 550 && rpg->events->y < (550 + 279))) {
        sfRenderWindow_close(rpg->window->window);
    }
}

void manage_mouse_click_map_99(rpg_t *rpg)
{
    if ((rpg->events->x > 1340 && rpg->events->x < (1340 + 570)) &&
    (rpg->events->y > 730 && rpg->events->y < (730 + 279))) {
        sfRenderWindow_close(rpg->window->window);
    }
    if ((rpg->events->x > 700 && rpg->events->x < (700 + 570)) &&
    (rpg->events->y > 730 && rpg->events->y < (730 + 279)))
        rpg->maps->map = 0;
    if ((rpg->events->x > 40 && rpg->events->x < (40 + 570)) &&
    (rpg->events->y > 730 && rpg->events->y < (730 + 279)))
        rpg->maps->map = rpg->maps->prev_map;
}

void manage_mouse_click_map_1(rpg_t *rpg)
{
    if (rpg->maps->quest_s == 0) {
        if ((rpg->events->x > 1515 && rpg->events->x < (1515 + 200)) &&
        (rpg->events->y > 730 && rpg->events->y < (730 + 200)))
            rpg->maps->quest_s = 2;
    }
    if (rpg->maps->quest_s == 1) {
        if ((rpg->events->x > 1515 && rpg->events->x < (1515 + 200)) &&
        (rpg->events->y > 730 && rpg->events->y < (730 + 200)))
            rpg->maps->quest_s = 4;

    }
}

void manage_mouse_click_map_2(rpg_t *rpg)
{
    if ((rpg->events->x > 1000 && rpg->events->x < 1100) &&
    (rpg->events->y > 350 && rpg->events->y < 450) && rpg->maps->king_s != 2)
        rpg->maps->king_s = 1;
    if (rpg->maps->king_s == 1) {
        if ((rpg->events->x > 520 && rpg->events->x < 760) &&
        (rpg->events->y > 890 && rpg->events->y < 950)) {
            rpg->events->fight = 1;
            rpg->maps->map = 666;
            rpg->maps->quest_status = 2;
            rpg->maps->king_s = 2;
            rpg->maps->quest_s = 1;
        }
        if ((rpg->events->x >1290 && rpg->events->x < 1500) &&
        (rpg->events->y > 890 && rpg->events->y < 950)) {
            rpg->maps->quest_status = 1;
            rpg->maps->king_s = 2;
            rpg->maps->quest_s = 1;
        }
    }
}
