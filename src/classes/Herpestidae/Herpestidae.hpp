#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include <string>

#include "../Animal/Animal.hpp"

class Herpestidae : public Animal {
    public:
        static const unsigned int PORTIONS_SIZE = 1; // TODO: Fix levar para classe genérica?
        
        virtual void print() const override;
        double consumedPortionsInKg(const unsigned int amountConsumedPortions); // TODO: Fix levar para classe genérica?
};

#endif
