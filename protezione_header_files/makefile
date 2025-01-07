CC=gcc 
CFLAGS=-Wall -I.

all: main

clean: 
	rm -rf domande_scuola.o domande_anagrafica.o main.o main 

main : main.o domande_anagrafica.o domande_scuola.o domande_anagrafica.h domande_scuola.h bool.h
	$(CC) -o main domande_anagrafica.o domande_scuola.o main.o $(CFLAGS)

main.o : main.c domande_anagrafica.h domande_scuola.h
	$(CC) -c main.c $(CFLAGS) 


domande_anagrafica.o : domande_anagrafica.c domande_anagrafica.h bool.h
	$(CC) -c domande_anagrafica.c $(CFLAGS)


domande_scuola.o : domande_scuola.c domande_scuola.h bool.h
	$(CC) -c domande_scuola.c $(CFLAGS)


	
.PHONY: clean 