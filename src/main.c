#include "../include/my.h"
#include "../include/menu.h"
#include "../include/game.h"
#include <stdio.h>

static void close_all(window_info_t *window_info)
{
    while (sfRenderWindow_pollEvent(window_info->window, &window_info->event)) {
        if (window_info->event.type == sfEvtClosed)
            window_info->game_value.game_status = 0;
    }
}

int main (int ac, char **av)
{
    window_info_t *window_info = malloc(sizeof(window_info_t));
    menu_data_t *menu_data = malloc(sizeof(menu_data_t));
    // game_data_t *game_data;
    // bool cest_le_boolen_bagare;

    window_init(window_info);
    menu_init(menu_data);
    // game_init(game_data);
    window_info->game_value.game_status = 1;
    while(sfRenderWindow_isOpen(window_info->window)) {
        close_all(window_info);
        if (window_info->game_value.game_status == 1)
            run_menu(window_info, menu_data);
        // else if(window_info->game_value.game_status == 2)
        //     run_game(window_info, game_data);
        else
            sfRenderWindow_close(window_info->window);
    }
    return (0);
}