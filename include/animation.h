/*
** EPITECH PROJECT, 2020
** CleanSFML
** File description:
** animation
*/

#ifndef ANIMATION_H_
#define ANIMATION_H_
    #include "header.h"

void anime_sprite(sfSprite *sprite, sfClock **clock,
                sfIntRect *rect, float anime_speed, int nbr_frames);
void scroll(sfSprite **sprite, sfClock **clock, sfVector2f *pos, float speed);

#endif /* !ANIMATION_H_ */
