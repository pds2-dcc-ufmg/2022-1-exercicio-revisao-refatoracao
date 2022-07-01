#include "Animal.hpp"

void Animal::print(){
    std::cout <<std::endl <<"[Animal]" <<std::endl;
    std::cout<<"Nome: " <<Animal_Nome<<std::endl;
    std::cout<<"Idade: "<<Animal_Idade<<std::endl;
    std::cout<<"Familia: " <<  Animal_Family<<std::endl;
}

void Animal::print_oi(){
    std::cout<<"Tchau"<<std::endl;
}

std::string Animal::getIdade(){
    return Animal_Idade;
}

std::string Animal::getFamily(){
    return Animal_Family;
}

std::string Animal::getNome(){
    return Animal_Nome;
}
