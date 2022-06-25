CC=g++
CFLAGS=-std=c++11 -Wall -Wextra -pedantic
TARGET=main

SRC_DIR= ./src
INCLUDE_DIR= ./include

${TARGET}:
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} ${SRC_DIR}/*cpp ${SRC_DIR}/objects/*cpp -o ${TARGET}

valgrind: ${TARGET}
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=valgrind-out.txt ./${TARGET}

clean:
	rm -f ${SRC_DIR}/${TARGET}