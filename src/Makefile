PROJECT_NAME = app

SRC_FOLDER = .
BUILD_FOLDER = ../build

COMPILER = gcc
BUILD_FLAGS = -std=c++11 -lstdc++

BUILD_FILES = ${BUILD_FOLDER}/main.o ${BUILD_FOLDER}/Ursidae.o ${BUILD_FOLDER}/Herpestidae.o ${BUILD_FOLDER}/Cuidador.o ${BUILD_FOLDER}/Animal.o ${BUILD_FOLDER}/Alimentacao.o ${BUILD_FOLDER}/Dieta.o

IPRINTABLE_FOLDER = ${SRC_FOLDER}/classes/IPrintable
IPRINTABLE_FILE = ${SRC_FOLDER}/classes/IPrintable/IPrintable.hpp

all: ${PROJECT_NAME}

${PROJECT_NAME}: ${BUILD_FILES}
	${COMPILER} ${BUILD_FOLDER}/*.o -o ${PROJECT_NAME} ${BUILD_FLAGS}

${BUILD_FOLDER}/main.o: ${SRC_FOLDER}/main.cpp
	${COMPILER} -c ${SRC_FOLDER}/main.cpp -o ${BUILD_FOLDER}/main.o

URSIDAE_FOLDER = ${SRC_FOLDER}/classes/Ursidae
${BUILD_FOLDER}/Ursidae.o: ${URSIDAE_FOLDER}/Ursidae.hpp ${URSIDAE_FOLDER}/Ursidae.cpp
	${COMPILER} -c ${URSIDAE_FOLDER}/Ursidae.cpp -o ${BUILD_FOLDER}/Ursidae.o

HERPESTIDAE_FOLDER = ${SRC_FOLDER}/classes/Herpestidae
${BUILD_FOLDER}/Herpestidae.o: ${HERPESTIDAE_FOLDER}/Herpestidae.hpp ${HERPESTIDAE_FOLDER}/Herpestidae.cpp
	${COMPILER} -c ${HERPESTIDAE_FOLDER}/Herpestidae.cpp -o ${BUILD_FOLDER}/Herpestidae.o

CUIDADOR_FOLDER = ${SRC_FOLDER}/classes/Cuidador
${BUILD_FOLDER}/Cuidador.o: ${IPRINTABLE_FILE} ${CUIDADOR_FOLDER}/Cuidador.hpp ${CUIDADOR_FOLDER}/Cuidador.cpp
	${COMPILER} -c ${CUIDADOR_FOLDER}/Cuidador.cpp -o ${BUILD_FOLDER}/Cuidador.o

ANIMAL_FOLDER = ${SRC_FOLDER}/classes/Animal
${BUILD_FOLDER}/Animal.o: ${IPRINTABLE_FILE} ${ANIMAL_FOLDER}/Animal.hpp ${ANIMAL_FOLDER}/Animal.cpp
	${COMPILER} -c ${ANIMAL_FOLDER}/Animal.cpp -o ${BUILD_FOLDER}/Animal.o

ALIMENTACAO_FOLDER = ${SRC_FOLDER}/classes/Alimentacao
${BUILD_FOLDER}/Alimentacao.o: ${IPRINTABLE_FILE} ${ALIMENTACAO_FOLDER}/Alimentacao.hpp ${ALIMENTACAO_FOLDER}/Alimentacao.cpp
	${COMPILER} -c ${ALIMENTACAO_FOLDER}/Alimentacao.cpp -o ${BUILD_FOLDER}/Alimentacao.o

DIETA_FOLDER = ${SRC_FOLDER}/classes/Dieta
${BUILD_FOLDER}/Dieta.o: ${DIETA_FOLDER}/Dieta.hpp ${DIETA_FOLDER}/Dieta.cpp
	${COMPILER} -c ${DIETA_FOLDER}/Dieta.cpp -o ${BUILD_FOLDER}/Dieta.o

clean:
	del /S ..\build\*
	del ${PROJECT_NAME}.exe
