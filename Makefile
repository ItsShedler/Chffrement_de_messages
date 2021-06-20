compilation:
	gcc -c main.c
	gcc -c vigenere.c
	gcc -c cesar.c
	gcc -c others.c
	gcc -o ch main.o vigenere.o others.o cesar.o vigenere.h cesar.h others.h
execute:
	./ch