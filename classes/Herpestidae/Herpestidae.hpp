#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include <string>

#include "../Animal/Animal.hpp"

class Herpestidae : public Animal {
    public:
        static const unsigned int PORTIONS_SIZE = 1;

    private:
        std::string species;

    public:
        virtual void print() const override;
        double consumedPortionsInKg(const unsigned int amountConsumedPortions);

        void setSpecies(const std::string species);
        std::string getSpecies() const;
};

#endif
