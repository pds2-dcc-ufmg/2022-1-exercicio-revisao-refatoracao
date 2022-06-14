#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include <string>

#include "../Animal/Animal.hpp"

class Ursidae : public Animal {
    public:
        static const unsigned int PORTIONS_SIZE = 5;

    private:
        double amountFishPerDayInKg;

    public:
        Ursidae();
        ~Ursidae();

        double consumedPortionsInKg(const unsigned int amountConsumedPortions); // TODO: Fix - Levar para classe genérica

        void setAmountFishPerDayInKg(const double amountFishPerDayInKg);
        double getAmountFishPerDayInKg() const;
};

#endif
