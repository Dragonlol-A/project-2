/**
 * pnm.h
 * 
 * Ce fichier contient les déclarations de types et les prototypes
 * des fonctions pour la manipulation d'images PNM.
 * 
 * @author: Gendebien Alexandre s2404939
 * @date: 24/02/25
 * @projet: INFO0030 Projet 1
 */

/*
 * Include guard (pour éviter les problèmes d'inclusions multiplies
 * Bonne pratique: toujours encadrer un header avec un include guard
 */
#ifndef __PNM__
#define __PNM__



typedef enum FileType {
   PBM,
   PGM,
   PPM,
} FileType;

typedef struct PNM_t PNM;



/**
 * load_pnm
 *
 * Charge une image PNM depuis un fichier.
 *
 * @param image l'adresse d'un pointeur sur PNM à laquelle écrire l'adresse
 *              de l'image chargée.
 * @param filename le chemin vers le fichier contenant l'image.
 *
 * @pre: image != NULL, filename != NULL
 * @post: image pointe vers l'image chargée depuis le fichier.
 *
 * @return:
 *     0 Succès
 *    -1 Erreur à l'allocation de mémoire
 *    -2 Nom du fichier malformé
 *    -3 Contenu du fichier malformé
 *
 */
int load_pnm(PNM **image, char* filename);

/**
 * write_pnm
 *
 * Sauvegarde une image PNM dans un fichier.
 *
 * @param image un pointeur sur PNM.
 * @param filename le chemin vers le fichier de destination.
 *
 * @pre: image != NULL, filename != NULL
 * @post: le fichier filename contient l'image PNM image.
 *
 * @return:
 *     0 Succès
 *    -1 Nom du fichier malformé
 *    -2 Erreur lors de la manipulation du fichier
 *
 */
int write_pnm(PNM *image, char* filename);

/**
 * skip_comm
 *
 * Ignore les commentaires dans un fichier PNM.
 *
 * @param file  un pointeur sur le fichier a dont il faut supprimer les commentaires.
 *
 * @pre: file!= NULL
 * @post: /
 *
 * @return: /
 *
 */

/*    static void skip_comm(FILE *file); */

/**
 * free_pnm
 * 
 * libére la mémoire allouée a la structure image(généralement en cas d'échec d'allocation mémorielle)
 * 
 * @param image un pointeur sur la structure PNM
 * 
 * @pre: image !=NULL
 * @post: la mémoire allouée a image est libérée
 * 
 * @return:
 *    void
 */
void freePNM(PNM *image);

/**
 * read_header
 * 
 * lit le header d'un fichier de type PNM et initialise les paramètre de l'image a lire
 * 
 * @param file un pointeur sur le fichier PNM a lire
 * @param image un pointeur sur la structure PNM à remplir avec les paramètres du header
 * 
 * @pre: file != NULL, image != NULL
 * @post: l'en-tête de l'image est lu depuis le fichier.
 *
 * @return:
 *     0 Succès
 *    -2 Nom du fichier malformé
 *    -3 Contenu du fichier malformé
 */
int read_header(FILE *file, PNM *image);

/**
 * read_data
 * 
 * lit les données d'un fichier pnm et les stockes dans la struct image
 * 
 * @param file un pointeur sur le fichier PNM a lire
 * @param image un pointeur sur la structure PNM servant pour passé les param du header et pour stocker les données de l'image
 * 
 * @pre: file != NULL, image != NULL
 * @post: les données de l'image sont lues depuis le fichier
 *
 * @return:
 *     0 Succès
 *    -1 malformation du fichier ppm
 *    -2 malformation au niveau des valeurs des pixels
 */
/**     static int read_data(FILE *file, PNM *image); */

__PNM__
#endif 
