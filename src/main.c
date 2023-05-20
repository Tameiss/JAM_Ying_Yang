#include "include/my.h"
#include "include/menu.h"
#include "include/game.h"

int main (int ac, char **av)
{
    window_info_t *window_info;
    game_data_t *game_data;
    menu_data_t *menu_data;
    bool cest_le_boolen_bagare;

    window_init(window_info);
    menu_init(menu_data);
    game_init(game_data);
    while(sfRenderWindow_isOpen(window_info->window)){
        if (window_info->game_value.game_status == 1)
            run_menu(window_info, menu_data);
        else if(window_info->game_value.game_status == 1)
            run_game(window_info, game_data);
        else
            close_game();
    }
}