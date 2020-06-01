/*
** EPITECH PROJECT, 2020
** CleanSFML
** File description:
** click_event
*/

#ifndef CLICK_EVENT_H_
#define CLICK_EVENT_H_
    #include "header.h"

sfBool mouse_on_text(sfText *text, sfRenderWindow *window);

sfBool mouse_on_sprite(sfSprite *sprite, sfRenderWindow *window);

sfBool click_on_sprite(sfSprite *sprite, sfRenderWindow *window);

sfBool click_on_text(sfText *text, sfRenderWindow *window);

#endif /* !CLICK_EVENT_H_ */
