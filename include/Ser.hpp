#ifndef SER_HPP
#define SER_HPP

#include <string>

class Ser{
    protected:
        std::string nome;
        
    public:
        Ser(std::string _nome);
        virtual ~Ser();
        virtual void print() const = 0;
        std::string getNome() const;
};

#endif