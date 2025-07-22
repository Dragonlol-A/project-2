#include <stdlib.h>
#include <assert.h>
#include <unistd.h>
#include <ctype.h>          

#include "pnm.h"


/**
 * @brief Converts the image to monochrome based on a specific color channel.
 * @param image Pointer to the PNM image structure.
 * @param parametre A string indicating the color channel ("r", "v", "b").
 * @pre image != NULL, parametre != NULL, image format is PPM.
 * @post image format is PGM.
 * 
 * @return 
 *  0: Success
 * -1: Image is not in PPM format.
 * -2: Invalid parameter.
 * -3: Image is NULL.
 */
int monochrome(PNM **image, const char *parametre);

/**
 * @brief Applies a custom filter to the image based on the provided parameter.
 * @param image Pointer to the PNM image structure.
 * @param parametre A string defining the filter behavior.
 * @pre image != NULL, parametre != NULL.
 * @post The image is modified based on the filter logic.
 * 
 * @return 
 *  0: Success
 * -1: Invalid parameter
 * -2: Image is NULL
 * -3: Invalid parameter
 * -4: Memory allocation failed
 */
int weird_named_function(PNM **image, char *parametre);

/**
 * @brief Converts the image to its negative vertion.
 * @param image Pointer to the PNM image structure.
 * @pre image != NULL 
 * @post The image is inverted (negative colors).
 * 
 * @return 
 *  0: Success
 * -1: Image is NULL.
 */
int negative(PNM **image);

/**
 * @brief Flips the image upside down.
 * @param image Pointer to the PNM image structure.
 * @pre image != NULL.
 * @post The image is flipped vertically
 * 
 * @return 
 *  0: Success
 * -1: Image is NULL.
 */
int upside_down(PNM **image);

/**
 * @brief Converts the image to black and white image.
 * @param image Pointer to the PNM image structure.
 * @param parametre A string defining the threshold value.
 * @pre image != NULL, parametre != NULL, image format is PPM or PGM.
 * @post The image is converted to black and white (PBM format).
 * 
 * @return 
 *  0: Success
 * -1: Image is NULL.
 * -2: Image format is not PPM or PGM.
 * -3: Invalid parameter.
 */
int black_and_white(PNM **image, char *parametre);