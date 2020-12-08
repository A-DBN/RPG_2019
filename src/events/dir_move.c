/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** dir_move.c
*/

#include "rpg.h"

void move_up(rpg_t *rpg)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        rpg->sprites->player = rpg->sprites->player_up;
        rpg->player->y -= 15;
    }
}

void move_down(rpg_t *rpg)
{
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        rpg->sprites->player = rpg->sprites->player_down;
        rpg->player->y += 15;
    }
}

void move_left(rpg_t *rpg)
{
    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        rpg->sprites->player = rpg->sprites->player_left;
        rpg->player->x -= 15;
    }
}

void move_right(rpg_t *rpg)
{
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        rpg->sprites->player = rpg->sprites->player_right;
        rpg->player->x += 15;
    }
}

void main_dir_move(rpg_t *rpg)
{
    if (rpg->maps->quest_s != 2 && rpg->maps->quest_s != 4 &&
    rpg->maps->king_s != 1 && rpg->maps->map != 99 &&
    rpg->maps->map != 55 && rpg->maps->map != 666) {
        move_up(rpg);
        move_down(rpg);
        move_left(rpg);
        move_right(rpg);
    }
}
