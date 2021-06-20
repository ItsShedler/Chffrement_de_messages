
/******************************************************************************
*  ASR => M2101                                                               *
*******************************************************************************
*                                                                             *
*  N° de Sujet : 3                                                            *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé : Projet-Chiffrement                                              *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 : MIQUEL Maxime                                                *
*                                                                             *
*  Nom-prénom2 : TIAN Shijie                                                  *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier : cesar.c                                                   *
*                                                                             *
******************************************************************************/



#include <stdio.h>
#include "cesar.h"
char coder_char(int k, char c)
{
    if (c >= 'a' && c <= 'z') {
        return 'a' + (c - 'a' + k) % 26 ;
    }  else{
        return c ;
    }
}
char decode_char(int k, char c)
{
    if (c >= 'a' && c <= 'z') {
        return 'a' + (c - 'a' - k) % 26 ;
    } else{
        return c;
    }
}

void cesar_chiffrer(int k, char * message)
{
    for (char * ptr = message; *ptr != '\0'; ++ptr) {
        *ptr = coder_char(k, *ptr) ;
	*ptr=*ptr-'a';
    }
}
void cesar_dechiffrer(int k, char * message)
{
    for (char * ptr = message; *ptr != '\0'; ++ptr) {
	*ptr=*ptr+'a';
        *ptr = decode_char(k, *ptr) ;
    }
}