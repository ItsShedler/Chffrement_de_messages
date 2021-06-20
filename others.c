
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
*  Nom du fichier : others.c                                                  *
*                                                                             *
******************************************************************************/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool verificationAlphanumerique(char message[]){
    bool isAlpha = false;
    char charactereSpeciaux[40]= {'>','<','#','(','{','[',']','}',')','/','*','-','+','.','@','|','&','~','"','_','`','^','?',';',',',':','!','%','$','\'','\\'};
    for(int i = 0; i < strlen(message); i++){
        for(int j = 0; j < 40; j++){
            if(message[i] == charactereSpeciaux[j]){
                return isAlpha = true;
            }
        }
    }
    return isAlpha;
}

int mod(int a, int b){
    if(a<b && a>=0){
        return a;
    }
    if (a>=b){
        while (a>=b){
            a=a-b;
        }
        return a;
    }
    if (a<0){
        while(a<0){
            a=a+b;
        }
        return a;
    }
}