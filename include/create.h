/*
** EPITECH PROJECT, 2020
** CleanSFMl
** File description:
** Header file for the create functions
*/

#ifndef INC_H_
#define INC_H_
    #include "header.h"

/**Create functions:
 * It return a complete sfRenderWindow *.
 * Parameters:
 *  @width is the width of the sfRenderWindow *.
 *  @height is the height of the sfRenderWindow *.
 *  @title is the title  (the name) of the sfRenderWindow *.
 * By default, the bits per pixel is 32.
**/
sfRenderWindow *create_window(unsigned int width, unsigned int height, char const *title);

/**Create functions:
 * It return a complete sfSprite create from an image.
 * Parameters:
 *  @path is the image's path which refers to the sprite.
 *  @size is an the scaling factor of the sprite. To set it to default put (sfVector2f){1, 1}.
**/
sfSprite *create_sprite(char const *path, sfVector2f size);

/**Create functions:
 * It return a sfText *.
 * Parameters:
 *  @string is the caracters in the sfText.
 *  @police is the path to the font files.
 *  @pos is the position where you want to place the text in the sfRenderWindow.
 *  @size is the font's size.
 *By default, the color of the text is set to white.
**/
sfText *create_text(char *string, char *police,
                    sfVector2f pos, unsigned int size);

/**Create functions:
 * It return a sfSound *.
 * Parameters:
 *  @buffer is a reference to a sfSoundBuffer. You can handle it by this way.
 *  @path is the filepath to the sound's file.
 *  @float is the volume.
 *  @play: true is you want to play the sound directly at its creation, false if not.
 *  @loop: true if you want a direct looping, false if not.
**/
sfSound *create_sound(sfSoundBuffer **buffer, char *path,
                      float volume, bool play, bool loop)


#endif /* !INC_H_ */
