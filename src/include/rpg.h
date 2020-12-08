/*
** EPITECH PROJECT, 2020
** Projects_template
** File description:
** project
*/

#ifndef PROJECT_H_
#define PROJECT_H_

#include <SFML/Graphics.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Joystick.h>
#include <SFML/Window/Event.h>
#include <SFML/Window/Keyboard.h>
#include <SFML/Window/Mouse.h>
#include <SFML/Window/Sensor.h>
#include <SFML/System/Clock.h>

typedef struct weapon_s
{
    int armor;
    int sword;
    int shield;
} weapon_t;

typedef struct inventory_s
{
    weapon_t *weapons;
} inventory_t;

typedef struct stats_s
{
    int level;
    int xp;
    int hp;
    int en_hp;
    int strength;
    int wisdom;
    int hits;
    int turn;
} stats_t;

typedef struct event_s
{
    sfMouseButtonEvent mouse_event;
    sfEvent event;
    int x;
    int y;
    int fight;
} event_t;

typedef struct clocks_s
{
    sfClock *clock1;
} clocks_t;

typedef struct sprite_s
{
    sfSprite *bg_menu;
    sfSprite *map1;
    sfSprite *map2;
    sfSprite *intro_farm;
    sfSprite *intro_fire;
    sfSprite *intro_f;
    sfSprite *intro_i;
    sfSprite *intro_t;
    sfSprite *sp1;
    sfSprite *sp2;
    sfSprite *sp3;
    sfSprite *sp4;
    sfSprite *player;
    sfSprite *player_left;
    sfSprite *player_right;
    sfSprite *player_up;
    sfSprite *player_down;
    sfSprite *quest_take;
    sfSprite *quest_on;
    sfSprite *pnj;
    sfSprite *roi;
} sprite_t;

typedef struct window_s
{
    sfRenderWindow *window;
} window_t;

typedef struct maps_s
{
    int map;
    int prev_map;
    int intro;
    int quest_s;
    int king_s;
    int questd;
    int quest_status;
} maps_t;

typedef struct player_s
{
    int x;
    int y;
} player_t;

typedef struct text_s
{
    sfFont *font;
    sfFont *font_bis;
    sfText *text1;
    sfText *text2;
    sfText *text3;
    sfText *text4;
    sfText *text5;
    sfText *text6;
    sfText *text_life;
    sfText *text_dead;
    sfText *text_fight;
    sfText *text_fightb;
    sfText *attack;
    sfText *defend;
    sfText *hp_player;
    sfText *hp_king;
    sfText *hp;
} text_t;

typedef struct rpg_s
{
    inventory_t *inventory;
    stats_t *stats;
    player_t *player;
    maps_t *maps;
    window_t *window;
    sprite_t *sprites;
    clocks_t *clocks;
    event_t *events;
    text_t *text;
} rpg_t;

// game
    int update_display(rpg_t *rpg);
    int display_level_0(rpg_t *rpg);
    int display_level_1(rpg_t *rpg);
    int quest_level_1(rpg_t *rpg);
    int display_level_2(rpg_t *rpg);
    int display_level_55(rpg_t *rpg);
    int display_level_55_bis(rpg_t *rpg, sfVector2f tmp);
    int display_level_99(rpg_t *rpg);
    int display_level_666(rpg_t *rpg);
    void display_buttons(rpg_t *rpg);
    void quest_taken(rpg_t *rpg);
    void king_quest(rpg_t *rpg);
    void quest_end(rpg_t *rpg);
    void fight_main(rpg_t *rpg);
// events
    void events_handler(rpg_t *rpg);
    void manage_keyboard_events(rpg_t *rpg);
    void main_dir_move(rpg_t *rpg);
    void manage_mouse_click(rpg_t *rpg);
    void manage_mouse_click_map_0(rpg_t *rpg);
    void manage_mouse_click_map_99(rpg_t *rpg);
    void manage_mouse_click_map_1(rpg_t *rpg);
    void manage_mouse_click_map_2(rpg_t *rpg);
    void manage_mouse_move(rpg_t *rpg);
    void manage_mouse_move_map_0(rpg_t *rpg);
    void manage_mouse_move_map_99(rpg_t *rpg);
    void manage_mouse_click_map_666(rpg_t *rpg);
    void update_mouse_pos(rpg_t *rpg);
    void manage_window_events(rpg_t *rpg);
// loop
    int loop_window(rpg_t *rpg);
// structs
    // free
        void internal_free_clocks(rpg_t *rpg);
        void internal_free_events(rpg_t *rpg);
        void internal_free_inventory(rpg_t *rpg);
        void internal_free_maps(rpg_t *rpg);
        void internal_free_player(rpg_t *rpg);
        void my_free_rpg(rpg_t *rpg);
        void internal_free_sprites(rpg_t *rpg);
        void internal_free_sprites_2(rpg_t *rpg);
        void internal_free_stats(rpg_t *rpg);
        void internal_free_text(rpg_t *rpg);
        void internal_free_weapons(rpg_t *rpg);
        void internal_free_window(rpg_t *rpg);
    // init
        clocks_t *init_clocks_struct(void);
        event_t *init_events_struct(void);
        inventory_t *init_inventory_struct(void);
        maps_t *init_maps_struct(void);
        player_t *init_player_struct(void);
        rpg_t *init_rpg_struct(void);
        sprite_t *init_sprites_struct(void);
        void init_next_sprites(sprite_t *sprites);
        text_t *init_text_struct(void);
        void init_text_bis(text_t *text);
        weapon_t *init_weapons_struct(void);
        stats_t *init_stats_struct(void);
        window_t *init_window_struct(void);
    // sfml
        void init_sprites(rpg_t *rpg);
        void init_animated_sprites(rpg_t *rpg);
        sfIntRect set_sprite_location(int width, int height, int left, int top);
        sfRenderWindow *init_window(void);
    // sprites
        sfFont *load_font(char *path);
        sfSprite *load_sprite(char *path);
        sfText *my_create_text(sfFont *font, unsigned int size, sfColor color,
        char *text_to_display);

int main(int ac, char **av);
int usage(void);

#endif /* !PROJECT_H_ */
