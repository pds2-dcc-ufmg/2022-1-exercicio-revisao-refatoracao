#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"
#include "ReservaAnimal.hpp"

int main()
{
	ReservaAnimal reserva;

	Cuidador* ana = new Cuidador("Ana Maria Rodrigues Lopes");
	Cuidador* fernanda = new Cuidador("Fernanda Silva Santos");
	
	reserva.addCuidador(ana);
	reserva.addCuidador(fernanda);
	
	Animal* bobby = new Ursidae("Bobby", 13);
	Animal* jorge = new Ursidae("Jorge", 1);
	Animal* bonina = new Herpestidae("Bonina", 7);
	Animal* felicio = new Ursidae("Felício", 3);
	Animal* tony = new Ursidae("Tony", 9, "Urso Pardo");
	Animal* wanda = new Ursidae("Wanda", 10, "Urso Polar");
	Animal* catita = new Herpestidae("Catita", 2, "Suricato");
	Animal* carolina = new Herpestidae("Carolina", 2, "Suricato");
	
	reserva.addAnimal("Ana Maria Rodrigues Lopes", bobby);
	reserva.addAnimal("Ana Maria Rodrigues Lopes", jorge);
	reserva.addAnimal("Fernanda Silva Santos", bonina);
	reserva.addAnimal("Ana Maria Rodrigues Lopes", felicio);
	reserva.addAnimal("Ana Maria Rodrigues Lopes", tony);
	reserva.addAnimal("Ana Maria Rodrigues Lopes", wanda);
	reserva.addAnimal("Fernanda Silva Santos", catita);
	reserva.addAnimal("Fernanda Silva Santos", carolina);

	vector<string> nomeAnimaisListar;
	nomeAnimaisListar.push_back("Bobby");
	nomeAnimaisListar.push_back("Jorge");
	nomeAnimaisListar.push_back("Bonina");
	nomeAnimaisListar.push_back("Felício");
	nomeAnimaisListar.push_back("Tony");
	nomeAnimaisListar.push_back("Wanda");
	nomeAnimaisListar.push_back("Catita");

	reserva.listarAnimais(nomeAnimaisListar);

	reserva.alimentar("Bobby", 2, "só quis comer 2 porções de peixes hoje");
	reserva.alimentar("Catita", 1, "comeu direitinho");
	reserva.alimentar("Carolina", 3, "estava com um apetite e tanto");
	reserva.alimentar("Tony", 10, "comeu um pouco da comida do Bobby");

	vector<string> animaisRelatorioAlimentacao;
	animaisRelatorioAlimentacao.push_back("Bobby");
	animaisRelatorioAlimentacao.push_back("Catita");
	animaisRelatorioAlimentacao.push_back("Carolina");
	animaisRelatorioAlimentacao.push_back("Tony");

	reserva.relatorioAlimentacao(animaisRelatorioAlimentacao);

	vector<string> tipoComidas;
	tipoComidas.push_back("Ração");
	tipoComidas.push_back("Peixe");

	reserva.relatorioKgComida(tipoComidas);

	return 0;
}
