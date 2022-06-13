#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include <string>

#include "../Animal/Animal.hpp"

class Herpestidae : public Animal {
    public:
        static const unsigned int PORTIONS_SIZE = 1; // TODO: Fix levar para classe genérica?

    private:
        std::string species; // TODO: Fix - Levar para classe genérica

    public:
        virtual void print() const override;
        double consumedPortionsInKg(const unsigned int amountConsumedPortions); // TODO: Fix levar para classe genérica?

        void setSpecies(const std::string species);
        std::string getSpecies() const;
};

#endif
