/*
** EPITECH PROJECT, 2018
** struct.h
** File description:
** my structs
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct menu_s
{
    sfRenderWindow *window;
    sfTexture *texture;
    sfSprite *sprite;
    sfTexture *texture_leaf;
    sfSprite *sprite_leaf;
    sfTexture *texture_trunk;
    sfSprite *sprite_trunk;
    sfVector2f *leaf;
    sfVector2f *trunk;
    size_t size;
    float base;
    size_t num;
    size_t line;
    size_t index_leaf;
    size_t index_trunk;
    sfEvent event;
} menu_t;

#endif
