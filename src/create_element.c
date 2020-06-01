/*
** EPITECH PROJECT, 2020
** CleanSFMl
** File description:
** Some useful functions for initialize some CSFML componant
*/

#include "../include/create.h"

sfRenderWindow *create_window(unsigned int width,
                              unsigned int height, char const *title)
{
    sfRenderWindow *Window;
    sfVideoMode mode;

    mode.width = width;
    mode.height = height;
    mode.bitsPerPixel = 32;
    Window = sfRenderWindow_create(mode, title, sfResize | sfClose, NULL);
    return (Window);
}

sfSprite *create_sprite(char const *path, sfVector2f size)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(path, NULL);

    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, size);
    return (sprite);
}

sfText *create_text(char *string, char *police,
                    sfVector2f pos, unsigned int size)
{
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile(police);

    sfText_setString(text, string);
    sfText_setFont(text, font);
    sfText_setColor(text, sfWhite);
    sfText_setPosition(text, pos);
    sfText_setCharacterSize(text, size);
    return (text);
}

sfSound *create_sound(sfSoundBuffer **buffer, char *path,
                      float volume, bool play, bool loop)
{
    sfSound *sound = sfSound_create();

    *buffer = sfSoundBuffer_createFromFile(path);
    sfSound_setBuffer(sound, *buffer);
    sfSound_setVolume(sound, volume);
    if (loop)
        sfSound_setLoop(sound, sfTrue);
    else
        sfSound_setLoop(sound, sfFalse);
    if (play)
        sfSound_play(sound);
    return (sound);
}