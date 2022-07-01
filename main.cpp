#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

void mostrarECriarAnimais();
void cuidadoresAlimentacao();

int main() {

    mostrarECriarAnimais();
    cuidadoresAlimentacao();

    return 0;
}

void mostrarECriarAnimais() {
    Animal Bobby = Animal("Ursidae", "Bobby", 13);
    Animal Jorge = Animal("Ursidae", "Jorge", 1);
    Animal Bonina = Animal("Herpestidae", "Bonina", 7);
    Animal Felicio = Animal("Ursidae", "Felício", 3);
    Ursidae Tony = Ursidae("Tony", 9, "Urso Pardo", 10.5);
    Ursidae Wanda = Ursidae("Wanda", 10, "Urso Polar", 7);
    Herpestidae Catita = Herpestidae("Catita", 2, "Suricato");

    Bobby.mostrarInfo();
    Jorge.mostrarInfo();
    Bonina.mostrarInfo();
    Felicio.mostrarInfo();
    Tony.mostrarInfo();
    Wanda.mostrarInfo();
    Catita.mostrarInfo();
}

void cuidadoresAlimentacao() {
    Cuidador cuidadora_Ana = Cuidador("Ana Maria Rodrigues Lopes");
    Cuidador cuidadora_Fernanda = Cuidador("Fernanda Silva Santos");

    Alimentacao Bobby_alimentacao = Alimentacao(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje", "Bobby", cuidadora_Ana);
    Alimentacao Catita_alimentacao = Alimentacao(1, "Ração especial", "Catita comeu direitinho", "Catita", cuidadora_Fernanda);
    Alimentacao Carolina_alimentacao = Alimentacao(3, "Ração", "Carolina estava com um apetite e tanto", "Carolina", cuidadora_Fernanda);
    Alimentacao Tony_alimentacao = Alimentacao(10, "Peixes", "Tony comeu um pouco da comida do Bobby", "Tony", cuidadora_Ana);

    double kgPeixeConsumidos = 0;
    double kgRacaoConsumidos = 0;
  
    kgPeixeConsumidos += Bobby_alimentacao.calcularPeixesConsumidos(Bobby_alimentacao.getPorcao());
    kgPeixeConsumidos += Tony_alimentacao.calcularPeixesConsumidos(Tony_alimentacao.getPorcao());
    kgRacaoConsumidos += Catita_alimentacao.calcularKgConsumidosRacao(Catita_alimentacao.getPorcao());
    kgRacaoConsumidos += Carolina_alimentacao.calcularKgConsumidosRacao(Carolina_alimentacao.getPorcao());

    std::cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << std::endl;
    Bobby_alimentacao.mostrarRelatorioIndividual();
    Catita_alimentacao.mostrarRelatorioIndividual();
    Carolina_alimentacao.mostrarRelatorioIndividual();
    Tony_alimentacao.mostrarRelatorioIndividual();

    Tony_alimentacao.mostrarConsumoTotal(kgRacaoConsumidos, kgPeixeConsumidos);
}
