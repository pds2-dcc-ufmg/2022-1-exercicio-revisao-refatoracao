CC=g++
CFLAGS=-std=c++11 -Wall

BUILD    = ./build
SRC    = ./src
INCLUDE  = ./include

${BUILD}Main: ${BUILD}/Alimentacao.o ${BUILD}/Cuidador.o ${BUILD}/Animal.o ${BUILD}/Main.o ${BUILD}/Ursidae.o ${BUILD}/Herpestidae.o
	${CC} ${CFLAGS} ${BUILD}/*.o -o Main

${BUILD}/Animal.o: ${INCLUDE}/Animal.hpp ${SRC}/Animal.cpp
	${CC} ${CFLAGS} -I ${INCLUDE}/ -c ${SRC}/Animal.cpp -o ${BUILD}/Animal.o

${BUILD}/Cuidador.o: ${INCLUDE}/Cuidador.hpp ${SRC}/Cuidador.cpp
	${CC} ${CFLAGS} -I ${INCLUDE}/ -c ${SRC}/Cuidador.cpp -o ${BUILD}/Cuidador.o

${BUILD}/Alimentacao.o: ${INCLUDE}/Alimentacao.hpp ${SRC}/Alimentacao.cpp
	${CC} ${CFLAGS} -I ${INCLUDE}/ -c ${SRC}/Alimentacao.cpp -o ${BUILD}/Alimentacao.o

${BUILD}/Ursidae.o: ${INCLUDE}/Ursidae.hpp ${SRC}/Ursidae.cpp
	${CC} ${CFLAGS} -I ${INCLUDE}/ -c ${SRC}/Ursidae.cpp -o ${BUILD}/Ursidae.o

${BUILD}/Herpestidae.o: ${INCLUDE}/Herpestidae.hpp ${SRC}/Herpestidae.cpp
	${CC} ${CFLAGS} -I ${INCLUDE}/ -c ${SRC}/Herpestidae.cpp -o ${BUILD}/Herpestidae.o

${BUILD}/Main.o: ${INCLUDE}/Animal.hpp ${INCLUDE}/Alimentacao.hpp ${INCLUDE}/Cuidador.hpp ${INCLUDE}/Herpestidae.hpp ${INCLUDE}/Ursidae.hpp ${SRC}/Main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE}/ -c ${SRC}/Main.cpp -o ${BUILD}/Main.o