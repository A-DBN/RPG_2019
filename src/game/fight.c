/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** fight.c
*/

#include "rpg.h"
#include "my.h"

void king_turn(rpg_t *rpg)
{
    rpg->stats->hp -= 20;
    rpg->stats->turn = 1;
}

void fight_main(rpg_t *rpg)
{
    sfVector2f en_hp = {1600, 300};
    sfVector2f hp = {300, 800};
    sfVector2f life = {175, 800};
    sfVector2f life_en = {1475, 300};

    sfText_setPosition(rpg->text->hp_king, en_hp);
    sfText_setPosition(rpg->text->hp_player, hp);
    sfText_setPosition(rpg->text->hp, life);
    sfRenderWindow_drawText(rpg->window->window, rpg->text->hp, NULL);
    sfText_setPosition(rpg->text->hp, life_en);
    sfRenderWindow_drawText(rpg->window->window, rpg->text->hp, NULL);
    sfText_setString(rpg->text->hp_king, my_itoa(rpg->stats->en_hp));
    sfText_setString(rpg->text->hp_player, my_itoa(rpg->stats->hp));
    sfRenderWindow_drawText(rpg->window->window, rpg->text->hp_king, NULL);
    sfRenderWindow_drawText(rpg->window->window, rpg->text->hp_player, NULL);
    if (rpg->stats->en_hp == 0) {
        rpg->maps->map = 2;
        return;
    }
    if (rpg->stats->turn == 0)
        king_turn(rpg);
}
