CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=arq
# FILE=teste.txt

${TARGET}: Cuidador.o Animal.o Alimentacao.o Herpestidae.o Ursidae.o main.o
	${CC} ${CFLAGS} *.o -o ${TARGET}

Cuidador.o: Cuidador.hpp Cuidador.cpp
	${CC} ${CFLAGS} -c Cuidador.cpp -o Cuidador.o

Animal.o: Animal.hpp Animal.cpp
	${CC} ${CFLAGS} -c Animal.cpp -o Animal.o

Alimentacao.o: Alimentacao.hpp Alimentacao.cpp
	${CC} ${CFLAGS} -c Alimentacao.cpp -o Alimentacao.o

Herpestidae.o: Herpestidae.hpp Herpestidae.cpp
	${CC} ${CFLAGS} -c Herpestidae.cpp -o Herpestidae.o

Ursidae.o: Ursidae.hpp Ursidae.cpp
	${CC} ${CFLAGS} -c Ursidae.cpp -o Ursidae.o

main.o: Cuidador.cpp Animal.cpp Alimentacao.cpp Herpestidae.cpp Ursidae.cpp main.cpp
	${CC} ${CFLAGS} -c main.cpp -o main.o

run:
	./${TARGET} #< ${FILE}

# Rule for cleaning files generated during compilation.
# Call 'make clean' to use it
clean:
	rm -f *.o