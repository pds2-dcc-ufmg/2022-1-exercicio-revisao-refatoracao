#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include <string>
#include <memory>

#include "../Animal/Animal.hpp"
#include "../DietaUrsidae/DietaUrsidae.hpp"

class Ursidae : public Animal {
    protected:
        virtual std::shared_ptr<Dieta> getDeitType() const override;

    public:
        static const unsigned int PORTIONS_SIZE = 5;

        Ursidae();
        Ursidae(const std::string name);
        Ursidae(const std::string name, const unsigned int age);
        Ursidae(const std::string name, const unsigned int age, const double amountFishPerDayInKg);
        Ursidae(const std::string name, const unsigned int age, const std::string species);
        Ursidae(const std::string name, const unsigned int age, const std::string species, const double amountFishPerDayInKg);
        virtual ~Ursidae();

        std::shared_ptr<DietaUrsidae> getUrsidaeDeit() const;
    
    private:
        void setDefaultInfo();
};

#endif
