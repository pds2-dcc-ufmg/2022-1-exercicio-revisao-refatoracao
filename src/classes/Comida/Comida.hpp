#ifndef COMIDA_HPP
#define COMIDA_HPP

#include <string>

#include "../IPrintable/IPrintable.hpp"

class Comida : public IPrintable {
    private:
        std::string foodType;
        double consumedAmount;

    public:
        Comida(const std::string foodType);
        Comida(const std::string foodType, const double consumedAmount);
        virtual ~Comida();

        virtual void print() const override;

        void setFoodType(const std::string foodType);
        std::string getFoodType() const;

        void setConsumedAmount(const double consumedAmount);
        double getConsumedAmount() const;
};

#endif
