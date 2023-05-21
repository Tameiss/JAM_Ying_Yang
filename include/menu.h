#ifndef MENU_H
    #define MENU_H

    #include "my.h"

/* struct */

    typedef struct menu_data_s {
        sfTexture *texture;
        sfSprite *sprite;
        sfRectangleShape *rect;
        sfCircleShape *circle;
        sfFont *font;
        sfText *text;
    } menu_data_t;

/* functions */

int hover(sfRenderWindow *window, sfRectangleShape *area, int status);
void window_init(window_info_t *window_info);
void menu_init(menu_data_t *menu_data);
void run_menu(window_info_t *window_info, menu_data_t *menu_data);

#endif /* !MENU_H */
