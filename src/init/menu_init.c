#include "../../include/menu.h"

static void background_menu(menu_data_t *menu_data)
{
    menu_data->texture = sfTexture_createFromFile("data/assets/menu.jpg",
    NULL);
    menu_data->sprite = sfSprite_create();
    sfSprite_setTexture(menu_data->sprite, menu_data->texture, sfTrue);
    sfSprite_setPosition(menu_data->sprite, (sfVector2f) {0, 0});
}

static void options_menu(menu_data_t *menu_data)
{
    char *str = "- Fight -";

    menu_data->font = sfFont_createFromFile("data/assets/Autography.otf");
    menu_data->text = sfText_create();
    sfText_setString(menu_data->text, str);
    sfText_setFont(menu_data->text, menu_data->font);
    sfText_setCharacterSize(menu_data->text, 32);
    sfText_setFillColor(menu_data->text, sfBlack);
    sfText_setOutlineColor(menu_data->text, sfWhite);
    sfText_setOutlineThickness(menu_data->text, 2);
    sfText_setPosition(menu_data->text, (sfVector2f) {0, 0});
}

static void hitbox_menu(menu_data_t *menu_data)
{
    menu_data->rect = sfRectangleShape_create();
    sfRectangleShape_setSize(menu_data->rect, (sfVector2f) {100, 50});
    sfRectangleShape_setFillColor(menu_data->rect, sfTransparent);
    sfRectangleShape_setOutlineColor(menu_data->rect, sfRed);
    sfRectangleShape_setOutlineThickness(menu_data->rect, 5);
    sfRectangleShape_setPosition(menu_data->rect, (sfVector2f) {0, 0});
}

void menu_init(menu_data_t *menu_data)
{
    background_menu(menu_data);
    options_menu(menu_data);
    hitbox_menu(menu_data);
}
