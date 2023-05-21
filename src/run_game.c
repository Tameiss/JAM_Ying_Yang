#include "../include/my.h"
#include "../include/game.h"

void run_game(window_info_t *window_info, game_data_t *game_data)
{
    sfRenderWindow_clear(window_info->window, sfMagenta);
    sfRenderWindow_drawSprite(window_info->window, game_data->sprite, NULL);
}