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
    sfSprite *spritesheet = create_sprite("CleanTest/asset/png/spritesheeta.png", (sfVector2f){2, 2});
    sfEvent event;
    sfClock *clock_spritesheet = sfClock_create();
    sfIntRect rect = {0, 0, 32, 24};
    sfSprite_setTextureRect(spritesheet, rect);

    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed
                || sfKeyboard_isKeyPressed(sfKeyEscape))
                sfRenderWindow_close(window);
        }
        anime_sprite(spritesheet, &clock_spritesheet, &rect, 0.5, 18);
        sfRenderWindow_drawSprite(window, spritesheet, NULL);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
}