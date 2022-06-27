OBJS	= Alimentacao.o Animal.o Cuidador.o Herpestidae.o Ursidae.o main.o
SOURCE	= Alimentacao.cpp Animal.cpp Cuidador.cpp Herpestidae.cpp Ursidae.cpp main.cpp
HEADER	= Alimentacao.hpp Animal.hpp Cuidador.hpp Herpestidae.hpp Ursidae.hpp
OUT	= executar
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

Alimentacao.o: Alimentacao.cpp
	$(CC) $(FLAGS) Alimentacao.cpp -std=c++11

Animal.o: Animal.cpp
	$(CC) $(FLAGS) Animal.cpp -std=c++11

Cuidador.o: Cuidador.cpp
	$(CC) $(FLAGS) Cuidador.cpp -std=c++11

Herpestidae.o: Herpestidae.cpp
	$(CC) $(FLAGS) Herpestidae.cpp -std=c++11

Ursidae.o: Ursidae.cpp
	$(CC) $(FLAGS) Ursidae.cpp -std=c++11

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp -std=c++11


clean:
	rm -f $(OBJS) $(OUT)