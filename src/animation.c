/*
** EPITECH PROJECT, 2020
** CleanSFML
** File description:
** animation
*/

#include "../include/animation.h"

void anime_sprite(sfSprite *sprite, sfClock **clock,
                sfIntRect *rect, float anime_speed, int nbr_frames)
{
    sfTime time = sfClock_getElapsedTime(*clock);
    int incr = rect->width;

    if (sfTime_asSeconds(time) > anime_speed) {
        if (rect->left >= incr * nbr_frames + 1)
            rect->left = 0;
        else
            rect->left += incr;
        sfSprite_setTextureRect(sprite, *rect);
        sfClock_restart(*clock);
    }
}

void scroll(sfSprite **sprite, sfClock **clock, sfVector2f *pos, float speed)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(*clock)) > speed) {
        sfClock_restart(*clock);
        sfSprite_setPosition(*sprite, *pos);
        pos->x -= 1;
        if (pos->x <= -1920 * 3)
            pos->x = 0;
    }
}