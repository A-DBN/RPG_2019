/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** window
*/

#include "rpg.h"
#include "my.h"
#include "SFML/Graphics.h"

sfRenderWindow *init_window(void)
{
    sfRenderWindow* window;
    sfVideoMode mode = {1920, 1080, 32};
    sfVector2i tmp = {0, 0};
    const char title[] = "My RPG";

    window = sfRenderWindow_create(mode, title, sfClose|sfFullscreen, NULL);
    if (!window)
        return (NULL);
    sfRenderWindow_setPosition(window, tmp);
    sfRenderWindow_setFramerateLimit(window, 60);
    return (window);
}
