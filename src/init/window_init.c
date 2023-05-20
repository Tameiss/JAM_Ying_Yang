#include "../../include/my.h"

void window_init(window_info_t *window_info)
{
    window_info->video.width = 1280;
    window_info->video.height = 720;
    window_info->video.bitsPerPixel = 32;
    window_info->window = sfRenderWindow_create(window_info->video,
    "-- Ying-Yang --", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window_info->window, 60);
}