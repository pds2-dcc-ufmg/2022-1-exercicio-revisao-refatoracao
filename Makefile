CC=g++
CFLAGS=-std=c++11 -Wall
INCLUDES=-I includes

all: build link

build:
	${CC} ${CFLAGS} ${INCLUDES} -c src/main.cpp -o build/main.o
	${CC} ${CFLAGS} ${INCLUDES} -c src/Animal/Animal.cpp -o build/Animal.o
	${CC} ${CFLAGS} ${INCLUDES} -c src/Animal/Herpestidae.cpp -o build/Herpestidae.o
	${CC} ${CFLAGS} ${INCLUDES} -c src/Animal/Ursidae.cpp -o build/Ursidae.o
	${CC} ${CFLAGS} ${INCLUDES} -c src/Cuidador/Cuidador.cpp -o build/Cuidador.o
	${CC} ${CFLAGS} ${INCLUDES} -c src/Alimentacao/Alimentacao.cpp -o build/Alimentacao.o

link:
	${CC} ${CFLAGS} build/*.o -o main

run:
	./main
