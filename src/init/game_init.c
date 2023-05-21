#include "../../include/game.h"

static void background_game(game_data_t *game_data)
{
    game_data->texture = sfTexture_createFromFile("data/assets/menu.jpg",
    NULL);
    game_data->sprite = sfSprite_create();
    sfSprite_setTexture(game_data->sprite, game_data->texture, sfTrue);
    sfSprite_setPosition(game_data->sprite, (sfVector2f) {0, 0});
}

void game_init(game_data_t *game_data)
{
    background_game(game_data);
}
