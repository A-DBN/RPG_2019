/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** load_sprite
*/

#include "rpg.h"

sfSprite *load_sprite(char *path)
{
    sfTexture *texture;
    sfSprite *sprite;

    texture = sfTexture_createFromFile(path, NULL);
    if (!texture)
        return NULL;
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    return (sprite);
}