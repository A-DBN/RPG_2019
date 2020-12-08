/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_sprites
*/

#include "rpg.h"

void init_sprites(rpg_t *rpg)
{
    rpg->sprites->sp1 = load_sprite("assets/bt/play_button.png");
    rpg->sprites->sp2 = load_sprite("assets/bt/exit_button.png");
    rpg->sprites->sp3 = load_sprite("assets/bt/menu_survol.png");
    rpg->sprites->sp4 = load_sprite("assets/bt/continue_survol.png");
    rpg->sprites->bg_menu = load_sprite("assets/bg_menu.png");
    rpg->sprites->intro_farm = load_sprite("assets/paysan.png");
    rpg->sprites->intro_fire = load_sprite("assets/feu.png");
    rpg->sprites->intro_f = load_sprite("assets/intro_1.png");
    rpg->sprites->intro_i = load_sprite("assets/intro_2.png");
    rpg->sprites->intro_t = load_sprite("assets/intro_3.png");
    rpg->sprites->map1 = load_sprite("assets/map1.png");
    rpg->sprites->map2 = load_sprite("assets/map2.png");
    rpg->sprites->quest_on = load_sprite("assets/quest_valid.png");
    init_animated_sprites(rpg);
    rpg->sprites->player = rpg->sprites->player_down;
    rpg->sprites->quest_take = load_sprite("assets/quest_take.png");
    rpg->sprites->pnj = load_sprite("assets/pnj.png");
    rpg->sprites->roi = load_sprite("assets/roi.png");
}

void init_animated_sprites(rpg_t *rpg)
{
    sfIntRect player_down = set_sprite_location(42, 63, 23, 12);
    sfIntRect player_left = set_sprite_location(42, 45, 23, 82);
    sfIntRect player_right = set_sprite_location(42, 46, 23, 144);
    sfIntRect player_up = set_sprite_location(42, 44, 23, 206);
    sfVector2f scale_value = {3, 3};

    rpg->sprites->player_up = load_sprite("assets/cheatsheet_player.png");
    sfSprite_scale(rpg->sprites->player_up, scale_value);
    sfSprite_setTextureRect(rpg->sprites->player_up, player_up);
    rpg->sprites->player_down = load_sprite("assets/cheatsheet_player.png");
    sfSprite_scale(rpg->sprites->player_down, scale_value);
    sfSprite_setTextureRect(rpg->sprites->player_down, player_down);
    rpg->sprites->player_right = load_sprite("assets/cheatsheet_player.png");
    sfSprite_scale(rpg->sprites->player_right, scale_value);
    sfSprite_setTextureRect(rpg->sprites->player_right, player_right);
    rpg->sprites->player_left = load_sprite("assets/cheatsheet_player.png");
    sfSprite_scale(rpg->sprites->player_left, scale_value);
    sfSprite_setTextureRect(rpg->sprites->player_left, player_left);
}

sfIntRect set_sprite_location(int width, int height, int left, int top)
{
    sfIntRect sprite;

    sprite.height = height;
    sprite.width = width;
    sprite.left = left;
    sprite.top = top;
    return (sprite);
}