/*
** EPITECH PROJECT, 2020
** CleanSFMl
** File description:
** Header file for the create functions
*/

#ifndef INC_H_
#define INC_H_
    #include "header.h"

/**
 * \brief Create functions:
 * \brief It return a complete sfRenderWindow *.
 * Parameters:
 *  @param width is the width of the sfRenderWindow *.
 *  @param height is the height of the sfRenderWindow *.
 * By default, the bits per pixel is 32.
 *  @param title is the title  (the name) of the sfRenderWindow *.
 */
sfRenderWindow *create_window(unsigned int width, unsigned int height, char const *title);

/**
 * \brief Create functions:
 * \brief It return a complete sfSprite create from an image.
 * Parameters:
 *  @param path is the image's path which refers to the sprite.
 *  @param size is an the scaling factor of the sprite. To set it to default put (sfVector2f){1, 1}.
 */
sfSprite *create_sprite(char const *path, sfVector2f size);

/**
 * \brief Create functions:
 * \brief It return a sfText *.
 * Parameters:
 *  @param string is the caracters in the sfText.
 *  @param police is the path to the font files.
 *  @param pos is the position where you want to place the text in the sfRenderWindow.
 *  @param size is the font's size.
 * By default, the color of the text is set to white.
 */
sfText *create_text(char *string, char *police,
                    sfVector2f pos, unsigned int size);

/**
 * Create functions:
 * It return a sfSound *.
 * Parameters:
 *  @param buffer is a reference to a sfSoundBuffer. You can handle it by this way.
 *  @param path is the filepath to the sound's file.
 *  @param float is the volume.
 *  @param play: true is you want to play the sound directly at its creation, false if not.
 *  @param loop: true if you want a direct looping, false if not.
 */
sfSound *create_sound(sfSoundBuffer **buffer, char *path,
                      float volume, bool play, bool loop);


#endif /* !INC_H_ */
