#include <SFML/Window.h>
#include <SFML/Graphics.h>

int hover(sfRenderWindow *window, sfRectangleShape *area, int status)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);
    sfFloatRect rect = sfRectangleShape_getGlobalBounds(area);

    if (sfFloatRect_contains(&rect, mouse_pos.x, mouse_pos.y)) {
        if (sfMouse_isButtonPressed(sfMouseRight))
            status = 2;
    }
    return (status);
}
