/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** my_create_text
*/

#include "rpg.h"

sfText *my_create_text(sfFont *font, unsigned int size, sfColor color,
char *text_to_display)
{
    sfText *text = sfText_create();

    sfText_setString(text, text_to_display);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, size);
    sfText_setColor(text, color);
    return (text);
}