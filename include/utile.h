/*
** EPITECH PROJECT, 2018
** utile.h
** File description:
** my utiles
*/

#ifndef UTILE_H_
#define UTILE_H_

#include <ncurses.h>
#include <curses.h>
#include <sys/wait.h>
#include <dirent.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <time.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/System/Vector2.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>

#define PATH_LEAF  "resources/leaf.png"
#define PATH_TRUNK  "resources/trunk.png"
#define PATH_BACKGROUND   "resources/sky.png"
#define NAME   "Tree"
#define FONT_SIZE   50
#define SIZE_PATH_MAX 1024
#define SIZE   1000
#define UNUSED __attribute__((unused))
#define HOT __attribute__((hot))

#endif
