/*
** EPITECH PROJECT, 2020
** CleanSFML
** File description:
** click_event
*/

#ifndef CLICK_EVENT_H_
#define CLICK_EVENT_H_
    #include "header.h"

/**
 * \brief Click Function.
 * \brief Test the if the mouse is on a sfText.
 * Parameters:
 *  @param text is the targeted text.
 *  @param window is the window which contains the text.
 */
sfBool mouse_on_text(sfText *text, sfRenderWindow *window);


/**
 * \brief Click Function.
 * \brief Test the if the mouse is on a sfSprite.
 * Parameters:
 *  @param sprite is the targeted sprite.
 *  @param window is the window which contains the sprite.
 */
sfBool mouse_on_sprite(sfSprite *sprite, sfRenderWindow *window);


/**
 * \brief Click Function.
 * \brief Test the if player click on a sfSprite.
 * Parameters:
 *  @param sprite is the targeted sprite.
 *  @param window is the window which contains the sprite.
 */
sfBool click_on_sprite(sfSprite *sprite, sfRenderWindow *window);


/**
 * \brief Click Function.
 * \brief Test the if the player click on a sfText.
 * Parameters:
 *  @param text is the targeted text.
 *  @param window is the window which contains the text.
 */
sfBool click_on_text(sfText *text, sfRenderWindow *window);

#endif /* !CLICK_EVENT_H_ */
