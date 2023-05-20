/*
** EPITECH PROJECT, 2023
** MY_H
** File description:
** MY_H
*/

#ifndef MY_H
#define MY_H

    #include <SFML/Graphics.h>
    #include <SFML/System.h>
    #include <SFML/Window.h>
    #include <SFML/Audio.h>
    #include <SFML/Network.h>
    #include <SFML/Config.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <stdbool.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <math.h>

    // struct


    typedef struct value_s {
        int game_status;
    } value_t;

    typedef struct window_info_s {
        sfRenderWindow *window;
        value_t game_value;
    } window_info_t;



#endif /* !MY_H */
