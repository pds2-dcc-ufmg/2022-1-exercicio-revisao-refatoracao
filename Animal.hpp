#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Animal {
    private:
        std::string Animal_Idade;
        std::string Animal_Family;
        std::string Animal_Nome;
    public:
        void print() {
            std::cout <<std::endl <<"[Animal]" <<std::endl;
            std::cout<<"Nome: " <<Animal_Nome<<std::endl;
            std::cout<<"Idade: "<<Animal_Idade<<std::endl;
            std::cout<<"Familia: " <<  Animal_Family<<std::endl;
        }

        void print_oi(){
            std::cout<<"Tchau"<<std::endl;
        }

        std::string getIdade(){
            return Animal_Idade;
        }

        std::string getFamily(){
            return Animal_Family;
        }

        std::string getNome(){
            return Animal_Nome;
        }
    
};

#endif
