/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include "tree.h"

void destroy_objs(menu_t *menu)
{
    free (menu->sprite_leaf);
    free (menu->sprite_trunk);
    sfTexture_destroy(menu->texture);
    sfSprite_destroy(menu->sprite);
    sfTexture_destroy(menu->texture_leaf);
    sfSprite_destroy(menu->sprite_leaf);
    sfTexture_destroy(menu->texture_trunk);
    sfSprite_destroy(menu->sprite_trunk);
    sfRenderWindow_destroy(menu->window);
}
