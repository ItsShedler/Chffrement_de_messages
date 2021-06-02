#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char code_char(char c, char m);

char decode_char(char c, char m);

void chiffre_vigenere(char cle[], char* message);

void dechiffre_vigenere(char cle[], char* message);

int mod(int a, int b);