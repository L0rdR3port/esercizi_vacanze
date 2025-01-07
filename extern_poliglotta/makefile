all: project

clean: project main.o italian.o english.o
	rm -f project main.o italian.o english.o

project: main.o italian.o english.o
	gcc -o project main.o italian.o english.o

main.o: main.c
	gcc -c -o main.o main.c

italian.o: italian.c
	gcc -c -o italian.o italian.c

english.o: english.c
	gcc -c -o english.o english.c 