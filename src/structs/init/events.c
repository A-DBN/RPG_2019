/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** events
*/

#include <stdlib.h>
#include "rpg.h"

event_t *init_events_struct(void)
{
    event_t *events = malloc(sizeof(event_t));

    if (events == NULL)
        return (NULL);
    events->x = 0;
    events->y = 0;
    events->fight = 0;
    return (events);
}
