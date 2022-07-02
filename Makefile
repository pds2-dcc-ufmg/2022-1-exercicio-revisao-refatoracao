CFLAGS = -std=c++11 -Wall
TARGET = exec

BUILD_DIR = ./build/
SRC_DIR = ./src/
INCLUDE_DIR = ./include/


${BUILD_DIR}/${TARGET}: ${BUILD_DIR}/main.o ${BUILD_DIR}/Alimentacao.o ${BUILD_DIR}/Cuidador.o ${BUILD_DIR}/Animal.o ${BUILD_DIR}/Herpestidae.o ${BUILD_DIR}/Ursidae.o
	g++ ${CFLAGS} ${BUILD_DIR}/*.o -o ${TARGET}

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/*.hpp ${SRC_DIR}/main.cpp
	g++ ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

${BUILD_DIR}/Alimentacao.o: ${SRC_DIR}/Alimentacao.cpp ${INCLUDE_DIR}/Alimentacao.hpp
	g++ ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Alimentacao.cpp  -o ${BUILD_DIR}/Alimentacao.o

${BUILD_DIR}/Cuidador.o: ${SRC_DIR}/Cuidador.cpp  ${INCLUDE_DIR}/Cuidador.hpp
	g++ ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Cuidador.cpp -o ${BUILD_DIR}/Cuidador.o

${BUILD_DIR}/Animal.o: ${SRC_DIR}/Animal.cpp  ${INCLUDE_DIR}/Animal.hpp
	g++ ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Animal.cpp -o ${BUILD_DIR}/Animal.o

${BUILD_DIR}/Herpestidae.o: ${SRC_DIR}/Herpestidae.cpp  ${INCLUDE_DIR}/Herpestidae.hpp
	g++ ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Herpestidae.cpp -o ${BUILD_DIR}/Herpestidae.o

${BUILD_DIR}/Ursidae.o: ${SRC_DIR}/Ursidae.cpp  ${INCLUDE_DIR}/Ursidae.hpp
	g++ ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Ursidae.cpp -o ${BUILD_DIR}/Ursidae.o


clean:
	rm -f ${BUILD_DIR}/*