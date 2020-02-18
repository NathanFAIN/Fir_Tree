/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include "tree.h"

void size_tree(menu_t *menu, size_t size)
{
    size_t line = 4;
    size_t to_remove = 2;

    menu->base = 1;
    menu->size = size;
    for (size_t index = 0; index != size; index++) {
        for (size_t index_bis = 0; index_bis != line + index; index_bis++) {
            menu->num += menu->base;
            menu->base += 2;
        }
        to_remove += index && !(index % 2) ? 2 : 0;
        menu->base -= to_remove;
    }
    menu->leaf = malloc(sizeof(sfVector2f) * (menu->num + 1));
    menu->trunk = malloc(sizeof(sfVector2f) * \
    ((menu->size + 1) * (menu->size + 1)));
}

int main(UNUSED int ac, UNUSED char **av)
{
    menu_t menu = {0};

    if (ac != 2)
        return (84);
    size_tree(&menu, atoi(av[1]));
    create_tree(&menu);
    create_trunk(&menu);
    create_window(&menu);
    while (sfRenderWindow_isOpen(menu.window))
        display_menu(&menu);
    destroy_objs(&menu);
    return (0);
}
