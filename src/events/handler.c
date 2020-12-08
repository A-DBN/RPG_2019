/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** handler
*/

#include "rpg.h"

void events_handler(rpg_t *rpg)
{
    manage_window_events(rpg);
    if (sfKeyboard_isKeyPressed(rpg->events->event.key.code)) {
        manage_keyboard_events(rpg);
        main_dir_move(rpg);
    }
    manage_mouse_click(rpg);
    manage_mouse_move(rpg);
}
