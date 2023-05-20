#include "../../include/menu.h"

static void background_menu(menu_data_t *menu_data)
{
    menu_data->texture = sfTexture_createFromFile("data/assets/menu.jpg",
    NULL);
    menu_data->sprite = sfSprite_create();
    sfSprite_setTexture(menu_data->sprite, menu_data->texture, sfTrue);
}

static void options_menu(menu_data_t *menu_data)
{
    menu_data->rect = sfRectangleShape_create();
    sfRectangleShape_setSize(menu_data->rect, (sfVector2f) {50, 50});
    sfRectangleShape_setFillColor(menu_data->rect, sfRed);
}

void menu_init(menu_data_t *menu_data)
{
    background_menu(menu_data);
    options_menu(menu_data);
}
