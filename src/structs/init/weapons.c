/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** weapons
*/

#include <stdlib.h>
#include "rpg.h"

weapon_t *init_weapons_struct(void)
{
    weapon_t *weapons = malloc(sizeof(weapon_t));

    if (weapons == NULL)
        return (NULL);
    return (weapons);
}