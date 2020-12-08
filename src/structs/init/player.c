/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** player
*/

#include <stdlib.h>
#include "rpg.h"

player_t *init_player_struct(void)
{
    player_t *players = malloc(sizeof(player_t));

    if (players == NULL)
        return (NULL);
    players->x = 950;
    players->y = 600;
    return (players);
}
