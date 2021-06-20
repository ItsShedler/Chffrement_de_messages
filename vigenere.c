
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
*  Nom du fichier : vigenere.c                                                *
*                                                                             *
******************************************************************************/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "vigenere.h"
#include "others.h"

void chiffre_vigenere(char cle[], char* message){

    int i = 0;
    for (char* ptr= message;*ptr !='\0' && i<strlen(cle);++ptr){
        *ptr=code_charV(cle[i],*ptr);
        if (i==strlen(cle)-1){
            i=0;
        }else{
            i++;
        }  
    }
}

void dechiffre_vigenere(char cle[], char* message){
    int i = 0;
    for (char* ptr= message;*ptr !='\0' && i<strlen(cle);++ptr){
        *ptr=decode_charV(*ptr,cle[i]);
        if (i==strlen(cle)-1){
            i=0;
        }else{
            i++;
        }  
    }
}

char code_charV(char c, char m){
    char new = ((c-97 + m-97)%26)+97;
    return new;
}

char decode_charV(char c, char m){
    char new = mod((c-97)-(m-97),26)+97;
    return new;
}

