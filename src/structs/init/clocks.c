/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** clocks
*/

#include <stdlib.h>
#include "rpg.h"

clocks_t *init_clocks_struct(void)
{
    clocks_t *clocks = malloc(sizeof(clocks_t));

    if (clocks == NULL)
        return (NULL);
    clocks->clock1 = NULL;
    return (clocks);
}