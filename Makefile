./refatoracao: build/main.o build/Herpestidae.o build/Ursidae.o build/Animal.o build/Cuidador.o build/Alimentacao.o
	g++ build/main.o build/Herpestidae.o build/Ursidae.o build/Animal.o build/Cuidador.o build/Alimentacao.o -o ./refatoracao

build/main.o: src/main.cpp
	g++ -c src/main.cpp -I include/ -o build/main.o

build/Animal.o: src/entidades/Animal.cpp
	g++ -c src/entidades/Animal.cpp -I include/ -o build/Animal.o

build/Herpestidae.o: src/entidades/Herpestidae.cpp
	g++ -c src/entidades/Herpestidae.cpp -I include/ -o build/Herpestidae.o

build/Ursidae.o: src/entidades/Ursidae.cpp
	g++ -c src/entidades/Ursidae.cpp -I include/ -o build/Ursidae.o

build/Cuidador.o: src/entidades/Cuidador.cpp
	g++ -c src/entidades/Cuidador.cpp -I include/ -o build/Cuidador.o

build/Alimentacao.o: src/registro/Alimentacao.cpp
	g++ -c src/registro/Alimentacao.cpp -I include/ -o build/Alimentacao.o

clean:
	rm* .o refatoracao
