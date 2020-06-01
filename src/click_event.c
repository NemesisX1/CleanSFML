/*
** EPITECH PROJECT, 2020
** CleanSFML
** File description:
** click_event
*/

#include "../include/click_event.h"

sfBool mouse_on_text(sfText *text, sfRenderWindow *window)
{
    sfFloatRect rect = sfText_getGlobalBounds(text);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);

    if (mouse.x > rect.left && mouse.x < rect.left + rect.width
        && mouse.y > rect.top && mouse.y < rect.top + rect.height)
        return (sfTrue);
    return (sfFalse);
}

sfBool mouse_on_sprite(sfSprite *sprite, sfRenderWindow *window)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(sprite);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);

    if (mouse.x > rect.left && mouse.x < rect.left + rect.width
        && mouse.y > rect.top && mouse.y < rect.top + rect.height)
        return (sfTrue);
    return (sfFalse);
}

sfBool click_on_sprite(sfSprite *sprite, sfRenderWindow *window)
{
    if (mouse_on_sprite(sprite, window) && sfMouse_isButtonPressed(sfMouseLeft))
        return (sfTrue);
    return (sfFalse);
}

sfBool click_on_text(sfText *text, sfRenderWindow *window)
{
    if (mouse_on_text(text, window) && sfMouse_isButtonPressed(sfMouseLeft))
        return (sfTrue);
    return (sfFalse);
}