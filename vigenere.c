#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "vigenere.h"

void chiffre_vigenere(char cle[], char* message){

    int i = 0;
    for (char* ptr= message;*ptr !='\0' && i<strlen(cle);++ptr){
        *ptr=code_char(cle[i],*ptr);
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
        *ptr=decode_char(*ptr,cle[i]);
        if (i==strlen(cle)-1){
            i=0;
        }else{
            i++;
        }  
    }
}

char code_char(char c, char m){
    char new = ((c-97 + m-97)%26)+97;
    return new;
}

char decode_char(char c, char m){
    char new = mod((c-97)-(m-97),26)+97;
    return new;
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