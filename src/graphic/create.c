/*
** EPITECH PROJECT, 2018
** create.c
** File description:
** create
*/

#include "tree.h"

void create_window(menu_t *menu)
{
    sfVideoMode video_mode = {SIZE, SIZE, 32};

    menu->window = sfRenderWindow_create(video_mode, NAME, sfClose, NULL);
    sfRenderWindow_setFramerateLimit(menu->window, 20);
    menu->texture = sfTexture_createFromFile(PATH_BACKGROUND, NULL);
    menu->sprite = sfSprite_create();
    sfSprite_setTexture(menu->sprite, menu->texture, sfTrue);
}

HOT inline void leaf_tree(menu_t *menu, size_t space, size_t leaf)
{
    for (size_t index = 0; index != leaf; index++) {
        menu->leaf[menu->index_leaf] = (sfVector2f){(space * (150 * (SIZE / \
        (menu->base * 150))) + index * (150 * (SIZE / (menu->base * 150)))), \
        menu->line * (150 * (SIZE / (menu->base * 150)))};
        menu->index_leaf++;
    }
}

void create_trunk(menu_t *menu)
{
    size_t trunk = (menu->size / 2) * 2 + 1;
    size_t index_bis;

    for (size_t index = 0; index < menu->size; index++) {
        for (index_bis = 0; index_bis < trunk; index_bis++) {
            menu->trunk[menu->index_trunk] = (sfVector2f){(((size_t)menu->base / 2 - trunk / 2) * (150 * (SIZE / (menu->base * 150))) + index_bis * (150 * (SIZE / (menu->base * 150)))), menu->line * (150 * (SIZE / (menu->base * 150)))};
            menu->index_trunk++;
        }
        menu->line++;
    }
    menu->texture_trunk = sfTexture_createFromFile(PATH_TRUNK, NULL);
    menu->sprite_trunk = sfSprite_create();
    sfSprite_setTexture(menu->sprite_trunk, menu->texture_trunk, sfTrue);
    sfSprite_setScale(menu->sprite_trunk, (sfVector2f){(SIZE / (menu->base * 150)), (SIZE / (menu->base * 150))});
}


void create_tree(menu_t *menu)
{
    size_t line = 4;
    size_t to_remove = 2;
    size_t base = 1;
    size_t index_bis;

    for (size_t index = 0; index != menu->size; index++) {
        for (index_bis = 0; index_bis != line + index; index_bis++) {
            leaf_tree(menu, menu->base / 2 - base / 2, base);
            menu->line++;
            base += 2;
        }
        to_remove += index && !(index % 2) ? 2 : 0;
        base -= to_remove + 2;
    }
    menu->texture_leaf = sfTexture_createFromFile(PATH_LEAF, NULL);
    menu->sprite_leaf = sfSprite_create();
    sfSprite_setTexture(menu->sprite_leaf, menu->texture_leaf, sfTrue);
    sfSprite_setScale(menu->sprite_leaf, (sfVector2f){(SIZE / (menu->base * 150)), (SIZE / (menu->base * 150))});
}
