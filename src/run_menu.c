#include "../include/my.h"
#include "../include/menu.h"

void run_menu(window_info_t *window_info, menu_data_t *menu_data)
{
    sfRenderWindow_clear(window_info->window, sfCyan);
    sfRenderWindow_drawSprite(window_info->window, menu_data->sprite, NULL);
    sfRenderWindow_drawRectangleShape(window_info->window, menu_data->rect, NULL);
}
