# htoi 

PROJECT_NAME =? htoi

.PHONY = compile clear

compile:
	gcc -o Htoi.out -O3 htoi.c
	
clean:
	rm -f Htoi.out
