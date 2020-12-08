/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** text
*/

#include <stdlib.h>
#include "rpg.h"

void internal_free_text(rpg_t *rpg)
{
    sfFont_destroy(rpg->text->font);
    sfFont_destroy(rpg->text->font_bis);
    sfText_destroy(rpg->text->text1);
    sfText_destroy(rpg->text->text2);
    sfText_destroy(rpg->text->text3);
    sfText_destroy(rpg->text->text4);
    sfText_destroy(rpg->text->text5);
    sfText_destroy(rpg->text->text6);
    sfText_destroy(rpg->text->text_life);
    sfText_destroy(rpg->text->text_dead);
    sfText_destroy(rpg->text->text_fight);
    sfText_destroy(rpg->text->text_fightb);
    sfText_destroy(rpg->text->hp_king);
    sfText_destroy(rpg->text->hp_player);
    sfText_destroy(rpg->text->hp);
}
