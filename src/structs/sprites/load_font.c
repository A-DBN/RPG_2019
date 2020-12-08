/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** load_font
*/

#include "rpg.h"

sfFont *load_font(char *path)
{
    sfFont *font = NULL;

    font = sfFont_createFromFile(path);
    return (font);
}