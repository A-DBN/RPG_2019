/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** text
*/

#include <stdlib.h>
#include "rpg.h"

text_t *init_text_struct(void)
{
    text_t *text = malloc(sizeof(text_t));

    if (text == NULL)
        return (NULL);
    text->font = load_font("assets/Pineforest.ttf");
    text->font_bis = load_font("assets/stabillo.ttf");
    text->text1 = my_create_text(text->font, 75, sfBlack,
    "Bonjour jeune aventurier, l'homme que");
    text->text2 = my_create_text(text->font, 75, sfBlack,
    "tu cherches se trouve au bout du chemin.");
    text->text3 = my_create_text(text->font, 75, sfBlack,
    "Que comptes-tu faire ?");
    text->text4 = my_create_text(text->font, 75, sfBlack,
    "Je n'ai plus l'age de me battre, fais ce que tu veux de moi");
    text->text5 = my_create_text(text->font, 75, sfBlack,
    "Merci de l'avoir epargne,");
    text->text6 = my_create_text(text->font, 75, sfBlack,
    "tu as fait le bon choix");
    init_text_bis(text);
    return (text);
}

void init_text_bis(text_t *text)
{
    text->text_life = my_create_text(text->font, 75, sfRed, "Epargner");
    text->text_dead = my_create_text(text->font, 75, sfRed, "Combattre");
    text->text_fight = my_create_text(text->font, 75, sfBlack,
    "Je ne pensais pas que tu ferais ce choix");
    text->text_fightb = my_create_text(text->font, 75, sfBlack,
    "je ne peux laisser te laisser vivre dans ce temple");
    text->attack = my_create_text(text->font, 125, sfRed, "Attaquer");
    text->defend = my_create_text(text->font, 125, sfRed, "Se soigner");
    text->hp_king = my_create_text(text->font_bis, 125, sfRed, "100");
    text->hp_player = my_create_text(text->font_bis, 125, sfRed, "100");
    text->hp = my_create_text(text->font, 125, sfRed, "hp: ");
}
