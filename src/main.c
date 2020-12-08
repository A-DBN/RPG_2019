/*
** EPITECH PROJECT, 2019
** Projects_template
** File description:
** main
*/

#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "rpg.h"

int main(int ac, char **av)
{
    rpg_t *rpg = init_rpg_struct();
    int return_value = 0;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        return (usage());
    if (rpg == NULL)
        return (84);
    rpg->window->window = init_window();
    if (rpg->window->window == NULL)
        return (84);
    init_sprites(rpg);
    return_value = loop_window(rpg);
    my_free_rpg(rpg);
    return (return_value);
}
