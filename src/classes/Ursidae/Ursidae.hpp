#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include <string.h>

#include "../Animal/Animal.hpp"

class Ursidae : public Animal {
    public:
        static const unsigned int PORTIONS_SIZE = 5;

    private:
        double amountFishPerDayInKg;

    public:
        virtual void print() const override;
        double consumedPortionsInKg(const unsigned int amountConsumedPortions); // TODO: Fix - Levar para classe genérica

        void setAmountFishPerDayInKg(const double amountFishPerDayInKg);
        double getAmountFishPerDayInKg() const;
};

#endif

