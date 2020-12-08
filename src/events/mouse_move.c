/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** mouse_move
*/

#include "rpg.h"

void manage_mouse_move(rpg_t *rpg)
{
    update_mouse_pos(rpg);
    if (! sfMouse_isButtonPressed(sfMouseLeft)) {
        if (rpg->maps->map == 0) {
            manage_mouse_move_map_0(rpg);
            return;
        }
        if (rpg->maps->map == 99) {
            manage_mouse_move_map_99(rpg);
            return;
        }
    }
}

void manage_mouse_move_map_0(rpg_t *rpg)
{
    if ((rpg->events->x > 600 && rpg->events->x < (600 + 570)) &&
    (rpg->events->y > 250 && rpg->events->y < (250 + 279)))
        rpg->sprites->sp1 = load_sprite("assets/bt/play_button_survol.png");
    else if (rpg->maps->prev_map == 1 || rpg->maps->prev_map == 2)
        rpg->sprites->sp1 = load_sprite("assets/bt/play_button_press.png");
    else
        rpg->sprites->sp1 = load_sprite("assets/bt/play_button.png");
    if ((rpg->events->x > 600 && rpg->events->x < (600 + 570)) &&
    (rpg->events->y > 550 && rpg->events->y < (550 + 279)))
        rpg->sprites->sp2 = load_sprite("assets/bt/exit_button_survol.png");
    else
        rpg->sprites->sp2 = load_sprite("assets/bt/exit_button.png");
}

void manage_mouse_move_map_99(rpg_t *rpg)
{
    if ((rpg->events->x > 1340 && rpg->events->x < (1340 + 570)) &&
    (rpg->events->y > 730 && rpg->events->y < (730 + 279)))
        rpg->sprites->sp2 = load_sprite("assets/bt/exit_button_survol.png");
    else
        rpg->sprites->sp2 = load_sprite("assets/bt/exit_button.png");
    if ((rpg->events->x > 700 && rpg->events->x < (700 + 570)) &&
    (rpg->events->y > 730 && rpg->events->y < (730 + 279)))
        rpg->sprites->sp3 = load_sprite("assets/bt/menu_press.png");
    else
        rpg->sprites->sp3 = load_sprite("assets/bt/menu_survol.png");
    if ((rpg->events->x > 40 && rpg->events->x < (40 + 570)) &&
    (rpg->events->y > 730 && rpg->events->y < (730 + 279)))
        rpg->sprites->sp4 = load_sprite("assets/bt/continue_pressed.png");
    else
        rpg->sprites->sp4 = load_sprite("assets/bt/continue_survol.png");
}
