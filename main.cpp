#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"
using namespace std;

int main()
{

  Cuidador Kate(2500, "20-02-2002", "Kate", "4002-8922");
  Ursidae Bobby("Bobby, O Bardo", "Urso Pardo", 20, "Ursidae");
  Herpestidae Dima("Dima", "Hiena", 4, "Herpestidae");
  Cuidador Jacob(3000, "13-03-1998", "Jacob", "777-777");
  Bobby.alimentar("Frango", 2, "Bobby foi muito bem receptivo, como sempre", "15-02-2022", Kate);
  Bobby.alimentar("Tilapia", 3.5, "Bobby estava se preparando para hibernar", "20-02-2022", Kate);
  Dima.alimentar("Roedores", 1.2, "Dima estava machucada e tentou me atacar", "21-02-2022", Jacob);
  Dima.alimentar("Frango", 2, "Dima estava bastante agressiva", "30-02-2022", Jacob);
  Bobby.print();
  Bobby.hibernar();
  Kate.print();
  Dima.print();
  Dima.fazOUrro();
  Jacob.print();

  return 0;
}
