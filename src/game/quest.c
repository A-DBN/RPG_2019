/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** quest.c
*/

#include "rpg.h"

void quest_taken(rpg_t *rpg)
{
    sfVector2f text_1 = {400, 800};
    sfVector2f text_2 = {400, 875};
    sfVector2f text_3 = {400, 950};

    sfText_setPosition(rpg->text->text1, text_1);
    sfText_setPosition(rpg->text->text2, text_2);
    sfText_setPosition(rpg->text->text3, text_3);
    sfRenderWindow_drawText(rpg->window->window, rpg->text->text3, NULL);
    sfRenderWindow_drawText(rpg->window->window, rpg->text->text2, NULL);
    sfRenderWindow_drawText(rpg->window->window, rpg->text->text1, NULL);
    if (rpg->events->event.key.code == sfKeyQ)
        rpg->maps->quest_s = 3;
}

void king_quest(rpg_t *rpg)
{
    sfVector2f tq = {400, 800};
    sfVector2f dead = {520, 875};
    sfVector2f life = {1300, 875};

    sfText_setPosition(rpg->text->text4, tq);
    sfText_setPosition(rpg->text->text_dead, dead);
    sfText_setPosition(rpg->text->text_life, life);
    sfRenderWindow_drawText(rpg->window->window, rpg->text->text4, NULL);
    sfRenderWindow_drawText(rpg->window->window, rpg->text->text_dead
    , NULL);
    sfRenderWindow_drawText(rpg->window->window, rpg->text->text_life
    , NULL);
}

void quest_end(rpg_t *rpg)
{
    sfVector2f pa = {400, 800};
    sfVector2f pb = {400, 875};

    if (rpg->maps->quest_status == 1) {
        sfText_setPosition(rpg->text->text5, pa);
        sfText_setPosition(rpg->text->text6, pb);
        sfRenderWindow_drawText(rpg->window->window, rpg->text->text6, NULL);
        sfRenderWindow_drawText(rpg->window->window, rpg->text->text5, NULL);
        if (rpg->events->event.key.code == sfKeyQ)
            rpg->maps->quest_s = 12;
    }
    if (rpg->maps->quest_status == 2) {
        sfText_setPosition(rpg->text->text_fight, pa);
        sfText_setPosition(rpg->text->text_fightb, pb);
        sfRenderWindow_drawText(rpg->window->window, rpg->text->text_fight
        , NULL);
        sfRenderWindow_drawText(rpg->window->window, rpg->text->text_fightb
        , NULL);
        if (rpg->events->event.key.code == sfKeyQ)
            rpg->maps->quest_s = 12;
    }
}
