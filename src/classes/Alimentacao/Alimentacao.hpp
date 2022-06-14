#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include <string>
#include <memory>

#include "../Cuidador/Cuidador.hpp"
#include "../IPrintable/IPrintable.hpp"
#include "../Comida/Comida.hpp"

class Alimentacao : public IPrintable {
    private:
        std::shared_ptr<Cuidador> responsable;
        std::shared_ptr<Comida> food;
        std::string description;
        std::string animalName;

    public:
        Alimentacao(const Cuidador responsable, const Comida food, const std::string animalName);
        Alimentacao(const Cuidador responsable, const Comida food, const std::string animalName, const std::string description);
        virtual ~Alimentacao();
        
        virtual void print() const override;

        void setResponsable(const Cuidador responsable);
        std::shared_ptr<Cuidador> getResponsable() const;

        void setFood(const Comida food);
        std::shared_ptr<Comida> getFood() const;

        void setDescription(const std::string description);
        std::string getDescription() const;

        void setAnimalName(const std::string animalName);
        std::string getAnimalName() const;
};

#endif
