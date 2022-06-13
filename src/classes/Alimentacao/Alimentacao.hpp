#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include <string>

#include "../Cuidador/Cuidador.hpp"

class Alimentacao {
    private:
        Cuidador responsable;
        std::string foodType;
        unsigned int amount;
        std::string description;
        std::string animalName;

    public:
        void print();

        void setResponsable(const Cuidador responsable);
        Cuidador getResponsable() const;

        void setFoodType(const std::string foodType);
        std::string getFoodType() const;

        void setAmount(const unsigned int amount);
        unsigned int getAmount() const;

        void setDescription(const std::string description);
        std::string getDescription() const;

        void setAnimalName(const std::string animalName);
        std::string getAnimalName() const;
};

#endif
