CC=g++
CFLAGS=-std=c++11 -Wall

BUILD_DIR    = ./build
SRC_DIR    = ./src
INCLUDE_DIR  = ./include


execution: ${BUILD_DIR}/Alimentacao.o ${BUILD_DIR}/Animal.o ${BUILD_DIR}/Cuidador.o ${BUILD_DIR}/Herpestidae.o ${BUILD_DIR}/Ursidae.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} ${BUILD_DIR}/*.o -o execution

${BUILD_DIR}/Alimentacao.o: ${INCLUDE_DIR}/Alimentacao.hpp ${SRC_DIR}/zoo/Alimentacao.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/zoo/Alimentacao.cpp -o ${BUILD_DIR}/Alimentacao.o

${BUILD_DIR}/Animal.o: ${INCLUDE_DIR}/Animal.hpp ${SRC_DIR}/zoo/Animal.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/zoo/Animal.cpp -o ${BUILD_DIR}/Animal.o

${BUILD_DIR}/Cuidador.o: ${INCLUDE_DIR}/Cuidador.hpp ${SRC_DIR}/zoo/Cuidador.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/zoo/Cuidador.cpp -o ${BUILD_DIR}/Cuidador.o

${BUILD_DIR}/Herpestidae.o: ${INCLUDE_DIR}/Herpestidae.hpp ${SRC_DIR}/zoo/Herpestidae.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/zoo/Herpestidae.cpp -o ${BUILD_DIR}/Herpestidae.o

${BUILD_DIR}/Ursidae.o: ${INCLUDE_DIR}/Ursidae.hpp ${SRC_DIR}/zoo/Ursidae.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/zoo/Ursidae.cpp -o ${BUILD_DIR}/Ursidae.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Alimentacao.hpp ${INCLUDE_DIR}/Animal.hpp ${INCLUDE_DIR}/Cuidador.hpp ${INCLUDE_DIR}/Herpestidae.hpp ${INCLUDE_DIR}/Ursidae.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

run:
	./execution
clean:
	rm -f main *.o