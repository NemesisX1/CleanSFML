/*
** EPITECH PROJECT, 2020
** CleanSFML
** File description:
** animation
*/

#ifndef ANIMATION_H_
#define ANIMATION_H_
    #include "header.h"

/**
 * \brief Animation Function.
 * \brief Anime a one line spritesheet.
 * Parameters:
 *  @param sprite is the sprite which refers to the spritesheet.
 *  @param clock is a pointer which refers to the clock to use for the animation.
 *  @param rect is a pointer which refers to the rect of the sprite.
 *  @param anime_speed indicate the speed of the animation.
 *  @param nbr_frames is the nbr of sprite on the spritesheet.
 * NB:  This animated function is for one line spritesheet.
 */
void anime_sprite(sfSprite *sprite, sfClock **clock,
                sfIntRect *rect, float anime_speed, int nbr_frames);

/**
 * \brief Animation function.
 * \brief Enable scrolling for a sprite.
 * Parameters:
 * @param sprite is a pointer to the sprite you want to scroll.
 * @param clock is a pointer to the clock which will time the scrolling sprite.
 * @param pos is a pointer to the sfVector2f of related to the position of the sprite.
 * @param speed indicate the speed of the scrolling.
 */
void scroll(sfSprite **sprite, sfClock **clock, sfVector2f *pos, float speed);

#endif /* !ANIMATION_H_ */
