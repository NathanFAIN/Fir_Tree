/*
** EPITECH PROJECT, 2018
** display.c
** File description:
** display
*/

#include "tree.h"

void display_menu(menu_t *menu)
{
    sfRenderWindow_clear(menu->window, sfBlack);
    while (sfRenderWindow_pollEvent(menu->window, &menu->event))
        if (menu->event.type == sfEvtClosed || \
        sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(menu->window);
    sfRenderWindow_drawSprite(menu->window, menu->sprite, NULL);
    for (size_t index = 0; index != menu->index_leaf; index++) {
        sfSprite_setPosition(menu->sprite_leaf, menu->leaf[index]);
        sfRenderWindow_drawSprite(menu->window, menu->sprite_leaf, NULL);
    }
    for (size_t index = 0; index != menu->index_trunk; index++) {
        sfSprite_setPosition(menu->sprite_trunk, menu->trunk[index]);
        sfRenderWindow_drawSprite(menu->window, menu->sprite_trunk, NULL);
    }
    sfRenderWindow_display(menu->window);
}
