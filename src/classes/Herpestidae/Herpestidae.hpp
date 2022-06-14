#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include <string>

#include "../Animal/Animal.hpp"

class Herpestidae : public Animal {
    public:
        static const unsigned int PORTIONS_SIZE = 1;

        Herpestidae();
        Herpestidae(const std::string name);
        Herpestidae(const std::string name, const unsigned int age);
        Herpestidae(const std::string name, const unsigned int age, const std::string species);
        virtual ~Herpestidae();
    
    private:
        void setDefaultInfo();
};

#endif
