#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

#include "../IPrintable/IPrintable.hpp"
#include "../Dieta/Dieta.hpp"

class Animal : public IPrintable {
    private:
        unsigned int age;
        std::string name;
        std::string family;
        std::string species;
    
    protected:
        Dieta deit;

    protected:
        void setFamily(const std::string family);

    public:
        Animal();
        Animal(const std::string name);
        Animal(const std::string name, const unsigned int age);
        Animal(const std::string name, const unsigned int age, const std::string species);
        virtual ~Animal();

        virtual void print() const override;

        void setAge(const unsigned int age);
        unsigned int getAge() const;

        void setName(const std::string name);
        std::string getName() const;

        std::string getFamily() const;

        void setSpecies(const std::string species);
        std::string getSpecies() const;

        Dieta getDeit() const;
};

#endif
