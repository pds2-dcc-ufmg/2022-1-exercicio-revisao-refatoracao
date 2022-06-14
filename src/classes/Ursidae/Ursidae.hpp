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
        virtual ~Ursidae();

        void setAmountFishPerDayInKg(const double amountFishPerDayInKg);
        double getAmountFishPerDayInKg() const;
};

#endif
