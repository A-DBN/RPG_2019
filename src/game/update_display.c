/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** update_display
*/

#include "rpg.h"

int update_display(rpg_t *rpg)
{
    int return_val = 0;

    sfRenderWindow_clear(rpg->window->window, sfBlack);
    if (rpg->maps->map == 0)
        return_val = display_level_0(rpg);
    if (rpg->maps->map == 1)
        return_val = display_level_1(rpg);
    if (rpg->maps->map == 2)
        return_val = display_level_2(rpg);
    if (rpg->maps->map == 55)
        return_val = display_level_55(rpg);
    if (rpg->maps->map == 99)
        return_val = display_level_99(rpg);
    if (rpg->maps->map == 666)
        return_val = display_level_666(rpg);
    sfRenderWindow_display(rpg->window->window);
    return (return_val);
}

int display_level_0(rpg_t *rpg)
{
    sfVector2f tmp = {600, 250};
    sfVector2f tmp2 = {600, 550};

    sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->bg_menu,
    NULL);
    sfSprite_setPosition(rpg->sprites->sp1, tmp);
    sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->sp1, NULL);
    sfSprite_setPosition(rpg->sprites->sp2, tmp2);
    sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->sp2, NULL);
    return (0);
}

int display_level_1(rpg_t *rpg)
{
    sfVector2f player = {rpg->player->x, rpg->player->y};
    sfVector2f pnj = {1500, 800};

    sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->map1, NULL);
    sfSprite_setPosition(rpg->sprites->player, player);
    sfSprite_setPosition(rpg->sprites->pnj, pnj);
    quest_level_1(rpg);
    sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->player, NULL);
    sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->pnj, NULL);
    if ((rpg->player->x > 1500 && rpg->player->x < 1920) && rpg->player->y >
    1001 && rpg->player->y <= 1080) {
        rpg->maps->map = 2;
        rpg->player->x = 100;
        rpg->player->y = 21;
    }
    return (0);
}

int display_level_55(rpg_t *rpg)
{
    sfVector2f tmp = {500, 800};

    if (sfTime_asSeconds(sfClock_getElapsedTime(rpg->clocks->clock1)) < 8) {
        sfRenderWindow_drawSprite(rpg->window->window,
        rpg->sprites->intro_farm, NULL);
        sfSprite_setPosition(rpg->sprites->intro_f, tmp);
        sfRenderWindow_drawSprite(rpg->window->window,
        rpg->sprites->intro_f, NULL);
    }
    display_level_55_bis(rpg, tmp);
    if (sfTime_asSeconds(sfClock_getElapsedTime(rpg->clocks->clock1)) > 30) {
        rpg->maps->map = 1;
        sfClock_destroy(rpg->clocks->clock1);
    }
    return (0);
}

int display_level_99(rpg_t *rpg)
{
    sfVector2f player = {rpg->player->x, rpg->player->y};
    sfVector2f king = {1000, 350};

    if (rpg->maps->prev_map == 1) {
        sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->map1,
        NULL);
        sfSprite_setPosition(rpg->sprites->player, player);
        sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->player
        , NULL);
    }
    if (rpg->maps->prev_map == 2) {
        sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->map2,
        NULL);
        sfSprite_setPosition(rpg->sprites->roi, king);
        sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->roi, NULL);
        sfSprite_setPosition(rpg->sprites->player, player);
        sfRenderWindow_drawSprite(rpg->window->window, rpg->sprites->player
        , NULL);
    }
    display_buttons(rpg);
    return (0);
}
