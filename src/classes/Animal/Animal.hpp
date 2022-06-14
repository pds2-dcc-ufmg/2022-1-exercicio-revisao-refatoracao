#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

#include "../IPrintable/IPrintable.hpp"

class Animal : public IPrintable {
    private:
        unsigned int age;
        std::string name;
        std::string family;
        std::string species;

    protected:
        void setFamily(const std::string family);

    public:
        virtual void print() const override;

        void setAge(const unsigned int age);
        unsigned int getAge() const;

        void setName(const std::string name);
        std::string getName() const;

        std::string getFamily() const;

        void setSpecies(const std::string species);
        std::string getSpecies() const;
};

#endif
