compilation:
	gcc -c main.c
	gcc -c vigenere.c
	gcc -o vigenere main.o vigenere.o vigenere.h
execute:
	./vigenere