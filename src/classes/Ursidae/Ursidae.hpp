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
        Ursidae(const std::string name);
        Ursidae(const std::string name, const unsigned int age);
        Ursidae(const std::string name, const unsigned int age, const double amountFishPerDayInKg);
        Ursidae(const std::string name, const unsigned int age, const std::string species);
        Ursidae(const std::string name, const unsigned int age, const std::string species, const double amountFishPerDayInKg);
        virtual ~Ursidae();

        void setAmountFishPerDayInKg(const double amountFishPerDayInKg);
        double getAmountFishPerDayInKg() const;
    
    private:
        void setDefaultInfo();
};

#endif
