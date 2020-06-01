/*
** EPITECH PROJECT, 2020
** Test
** File description:
** TestMain
*/

#include "../include/clean_sfml.h"

int main(void)
{
    sfRenderWindow *window = create_window(800, 600, "CleanSFML");
    sfEvent event;

    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed
                || sfKeyboard_isKeyPressed(sfKeyEscape))
                sfRenderWindow_close(window);
        }
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
}