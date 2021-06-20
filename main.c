
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
*  Nom du fichier : main.c                                                    *
*                                                                             *
******************************************************************************/




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "vigenere.h"
#include "cesar.h"
#include "others.h"

int main(){
   	char message[100];
	printf("Veuillez saisir le message à chiffrer\n(100 caractères max/ accents et caractères spéciaux non pris en charge): \n");
	fgets(message,100,stdin);
	
	while (verificationAlphanumerique(message)) {
        printf("Le message est incorrect, entrez votre message : \n");
        fgets(message, 100, stdin);
    }
	printf("\n");

	int x = 0;
	while(x != '\n' && x != EOF)
	{
		x = getchar();
	}

	char c;
	printf("Choisir un algorithme du chiffrement.\nCésar: tapez c;\nVigenère: tapez v\n");
	c=getchar();
	if(c='c'){
		int cle;
		printf("Vous avez choisi le chiffrement césar\nSaisir l'entier qui seras la clé :   \n");
		scanf("%d",&cle);
		cesar_chiffrer(cle, message);
		printf("Le message codé est: %s.\nVoulez vous déchiffrer le message ?\n(o/n)", message);
		char reponse;
		reponse=getchar();
		while(reponse!='o' || reponse != 'n'){
			printf("\nVotre choix n'est pas correct, saisir oui pour déchiffer ou non pour terminer le programme: \n");
        	reponse=getchar();
		}
		if (reponse='o'){
			cesar_dechiffrer(cle, message);
			printf("Le message d'origine est : %s",message);
		}
	}else if (c='v'){
		char cle2[100];
		printf("Vous avez choisi le chiffrement Vigenère\nSaisir la chaine de caractère qui seras la clé : \n");
		fgets(cle2,3,stdin);
		chiffre_vigenere(cle2, message);
		printf("Le message codé est: %s.\nVoulez vous déchiffrer le message ?\n(o/n)", message);
		char reponse;
		reponse=getchar();
		while(reponse!='o' || reponse != 'n'){
			printf("\nVotre choix n'est pas correct, saisir oui pour déchiffer ou non pour terminer le programme: \n");
        	reponse=getchar();
		}
		if (reponse='o'){
			dechiffre_vigenere(cle2, message);
			printf("Le message d'origine est : %s",message);
		}
		
	}
	return 0;

}
