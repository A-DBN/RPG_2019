/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** inventory
*/

#include <stdlib.h>
#include "rpg.h"

inventory_t *init_inventory_struct(void)
{
    inventory_t *inventory = malloc(sizeof(inventory_t));
    weapon_t *weapons = init_weapons_struct();

    if (inventory == NULL || weapons == NULL)
        return (NULL);
    inventory->weapons = weapons;
    return (inventory);
}