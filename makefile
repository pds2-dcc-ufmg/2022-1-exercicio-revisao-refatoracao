CC=g++
CFLAGS=-std=c++11 -Wall -Wextra -pedantic
TARGET=main

SRC_DIR= ./src
INCLUDE_DIR= ./include
BUILD_DIR=./build

FILES_NAMES = Alimentacao Animal Cuidador Herpestidae Ursidae Zoologico main
SOURCES= src/*.cpp src/objects/*cpp

VALGRIND_FILE=valgrind-out.txt

# compiles and links everything
${TARGET}:
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} ${SOURCES} -o ${TARGET}


# only compiles everything with flag -s and @ to supress the output
build:
	@mkdir build -p; \
	for file in ${FILES_NAMES}; do\
		make $$file.o -s; \
	done


# compiles the cpp files in the src/objects directory
%.o: ${SRC_DIR}/objects/%.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c $< -o ${BUILD_DIR}/$@


# compiles the cpp files in the source directory
%.o: ${SRC_DIR}/%.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c $< -o ${BUILD_DIR}/$@


# compiles and runs the code and execute valgrind
valgrind: ${TARGET}
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=valgrind-out.txt ./${TARGET}

# clear the directories
clean:
	rm -f ${BUILD_DIR}/* ${TARGET} valgrind-out.txt