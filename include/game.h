/*
** EPITECH PROJECT, 2023
** GAME_H
** File description:
** GAME_H
*/

#ifndef GAME_H
    #define GAME_H

    #include "my.h"

    // struct

    typedef struct black_ori_t
    {

    } black_ori_t;

    typedef struct white_ori_s
    {

    } white_ori_t;

    typedef struct game_data_s
    {
        white_ori_t *w_ori;
        black_ori_t *b_ori;
    } game_data_t;


#endif /* !GAME_H */
