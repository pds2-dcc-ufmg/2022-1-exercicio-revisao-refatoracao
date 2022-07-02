# Variaveis para facilitar a modificação, mas voce pode fazer sem elas, só que vai ser dificil se quiser modificar depois 
CC = g++
CFLAGS = -std=c++11 -Wall
TARGET = program

BUILD_DIR = ./build
SRC_DIR = ./src
# SRC_DIR_MAIN = ./src
INCLUDE_DIR = ./include

# esse codigo roda por ultimo, a partir dele será feito o arquivo de compilação geral
# adendo, ele pediu para deixar o arquivo na raiz, no caso o vpl_execution, então não colocamos nenhum diretorio no Target
#  se ele tivesse pedido que o vpl_Execution estivesse tambem no build, colocariamos ${BUILD_DIR}/ ${TARGET}.
${TARGET}: ${BUILD_DIR}/Alimentacao.o ${BUILD_DIR}/Animal.o ${BUILD_DIR}/Cuidador.o ${BUILD_DIR}/Herpestidae.o ${BUILD_DIR}/Ursidae.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} ${BUILD_DIR}/*.o -o ${TARGET}
 
# criando o arquivo de compilação de cada um dos arquivos
# heroi - primeira linha está criando o arquivo.o apartir dos arquivos cpp e hpp
# a segunda linha está compilando so Heroi, com o makefile vamos primeiro compilar um de cada vez e depois juntar como expresso a cima.
${BUILD_DIR}/Alimentacao.o: ${INCLUDE_DIR}/Alimentacao.hpp ${SRC_DIR}/Alimentacao.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Alimentacao.cpp -o ${BUILD_DIR}/Alimentacao.o
# analogo
${BUILD_DIR}/Animal.o: ${INCLUDE_DIR}/Animal.hpp ${SRC_DIR}/Animal.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Animal.cpp -o ${BUILD_DIR}/Animal.o
# analogo
${BUILD_DIR}/Cuidador.o: ${INCLUDE_DIR}/Cuidador.hpp ${SRC_DIR}/Cuidador.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Cuidador.cpp -o ${BUILD_DIR}/Cuidador.o

${BUILD_DIR}/Herpestidae.o: ${INCLUDE_DIR}/Herpestidae.hpp ${SRC_DIR}/Herpestidae.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Herpestidae.cpp -o ${BUILD_DIR}/Herpestidae.o

${BUILD_DIR}/Ursidae.o: ${INCLUDE_DIR}/Ursidae.hpp ${SRC_DIR}/Ursidae.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Ursidae.cpp -o ${BUILD_DIR}/Ursidae.o

#	esse é a união de todos os hpp's que estão sendo chamados no main, então para compilar o main, devemos compilar ele junto com todas as bibliotecas que criamos
# depois disso só criar o arquivo main.o e voltar para o primeiro la em cima para compilar tudo junto
${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Alimentacao.hpp ${INCLUDE_DIR}/Animal.hpp ${INCLUDE_DIR}/Cuidador.hpp ${INCLUDE_DIR}/Herpestidae.hpp ${INCLUDE_DIR}/Ursidae.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

# isso aqui eu não lembro o que é.
clean:
	rm -f ${BUILD_DIR}/*