#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "vigenere.h"


int main(){
    
    char message[]= "programmation";
    char cle[]    = "linux";
    chiffre_vigenere(cle, message);
    printf("Le message codé est   : %s\n", message);
    dechiffre_vigenere(cle,message);
    printf("Le message décodé est : %s\n", message);

    return 0;

}

