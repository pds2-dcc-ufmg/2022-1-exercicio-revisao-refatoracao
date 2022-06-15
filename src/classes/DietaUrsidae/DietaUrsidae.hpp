#ifndef DIETA_URSIDAE_HPP
#define DIETA_URSIDAE_HPP

#include "../Dieta/Dieta.hpp"

class DietaUrsidae : public Dieta {
    private:
        double amountFishPerDayInKg;

    public:
        DietaUrsidae(const unsigned int amountConsumedPortions);
        DietaUrsidae(const unsigned int amountConsumedPortions, const double amountFishPerDayInKg);
        virtual ~DietaUrsidae();

        void setAmountFishPerDayInKg(const double amountFishPerDayInKg);
        double getAmountFishPerDayInKg() const;
};

#endif
