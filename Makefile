C = g++
W = -Wall -std=c++11

E = ./exec

all: main

main: ${E}/Cuidador.o ${E}/Alimentacao.o ${E}/Animal.o ${E}/Herpestidae.o ${E}/Ursidae.o ${E}/main.o
	${C} ${W} ${E}/*.o -o main
${E}/Cuidador.o: Cuidador.hpp Cuidador.cpp
	${C} ${W} -c Cuidador.cpp -o ${E}/Cuidador.o
${E}/Alimentacao.o: Cuidador.hpp Alimentacao.hpp Alimentacao.cpp
	${C} ${W} -c Alimentacao.cpp -o ${E}/Alimentacao.o
${E}/Animal.o: Animal.hpp Animal.cpp
	${C} ${W} -c Animal.cpp -o ${E}/Animal.o
${E}/Herpestidae.o: Animal.hpp Herpestidae.hpp Herpestidae.cpp
	${C} ${W} -c Herpestidae.cpp -o ${E}/Herpestidae.o
${E}/Ursidae.o: Animal.hpp Ursidae.hpp Ursidae.cpp
	${C} ${W} -c Ursidae.cpp -o ${E}/Ursidae.o
${E}/main.o: Alimentacao.hpp Herpestidae.hpp Ursidae.hpp main.cpp
	${C} ${W} -c main.cpp -o ${E}/main.o