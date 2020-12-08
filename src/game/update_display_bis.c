/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** update_display_bis
*/

#include "rpg.h"

int display_level_55_bis(rpg_t *rpg, sfVector2f tmp)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(rpg->clocks->clock1)) > 8 &&
        sfTime_asSeconds(sfClock_getElapsedTime(rpg->clocks->clock1)) < 21) {
            sfRenderWindow_drawSprite(rpg->window->window,
            rpg->sprites->intro_fire, NULL);
            sfRenderWindow_drawSprite(rpg->window->window,
            rpg->sprites->intro_i, NULL);
            sfSprite_setPosition(rpg->sprites->intro_i, tmp);
    }
    if (sfTime_asSeconds(sfClock_getElapsedTime(rpg->clocks->clock1)) > 21 &&
        sfTime_asSeconds(sfClock_getElapsedTime(rpg->clocks->clock1)) < 30) {
            sfRenderWindow_drawSprite(rpg->window->window,
            rpg->sprites->intro_fire, NULL);
            sfRenderWindow_drawSprite(rpg->window->window,
            rpg->sprites->intro_t, NULL);
            sfSprite_setPosition(rpg->sprites->intro_t, tmp);
    }
    return (0);
}

int display_level_2(rpg_t *rpg)
{
    sfVector2f player = {rpg->player->x, rpg->player->y};
    sfVector2f king = {1000, 350};

    sfSprite_setPosition(rpg->sprites->player, player);
    sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->map2, NULL);
    sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->player, NULL);
    if (rpg->maps->quest_s == 3 || rpg->maps->quest_s == 1) {
        sfSprite_setPosition(rpg->sprites->roi, king);
        sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->roi, NULL);
    }
    if (rpg->maps->king_s == 1)
        king_quest(rpg);
    if ((rpg->player->x > 0 && rpg->player->x < 200) && rpg->player->y >
    0 && rpg->player->y <= 20) {
        rpg->maps->map = 1;
        rpg->player->x = 1700;
        rpg->player->y = 1000;
    }
    return (0);
}

int quest_level_1(rpg_t *rpg)
{
    sfVector2f quest = {1550, 750};

    if (rpg->maps->quest_s == 0) {
        sfSprite_setPosition(rpg->sprites->quest_take, quest);
        sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->quest_take
        , NULL);
    }
    if (rpg->maps->quest_s == 1) {
        sfSprite_setPosition(rpg->sprites->quest_on, quest);
        sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->quest_on,
        NULL);
    }
    if (rpg->maps->quest_s == 2)
        quest_taken(rpg);
    if (rpg->maps->quest_s == 4)
        quest_end(rpg);
    return (0);
}

int display_level_666(rpg_t *rpg)
{
    sfVector2f player = {710, 550};
    sfVector2f king = {1110, 330};
    sfVector2f attack = {1100, 900};
    sfVector2f defend = {1475, 900};

    sfSprite_setPosition(rpg->sprites->player, player);
    sfSprite_setPosition(rpg->sprites->roi, king);
    sfText_setPosition(rpg->text->attack, attack);
    sfText_setPosition(rpg->text->defend, defend);
    sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->map2, NULL);
    sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->player, NULL);
    sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->roi, NULL);
    sfRenderWindow_drawText(rpg->window->window, rpg->text->attack, NULL);
    sfRenderWindow_drawText(rpg->window->window, rpg->text->defend, NULL);
    if (rpg->events->fight == 1)
        fight_main(rpg);
    return 0;
}

void display_buttons(rpg_t *rpg)
{
    sfVector2f king = {1110, 330};
    sfVector2f player = {710, 550};
    sfVector2f tmp = {1340, 730};
    sfVector2f tmp2 = {700, 730};
    sfVector2f tmp3 = {40, 730};

    if (rpg->maps->prev_map == 666) {
        sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->map2,
        NULL);
        sfSprite_setPosition(rpg->sprites->player, player);
        sfSprite_setPosition(rpg->sprites->roi, king);
        sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->roi, NULL);
        sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->player
        , NULL);
    }
    sfSprite_setPosition(rpg->sprites->sp2, tmp);
    sfSprite_setPosition(rpg->sprites->sp3, tmp2);
    sfSprite_setPosition(rpg->sprites->sp4, tmp3);
    sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->sp2, NULL);
    sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->sp3, NULL);
    sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->sp4, NULL);
}
