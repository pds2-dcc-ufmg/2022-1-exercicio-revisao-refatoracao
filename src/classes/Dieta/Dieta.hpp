#ifndef DIETA_HPP
#define DIETA_HPP

class Dieta {
    public:
        static const unsigned int DEFAULT_PORTION_SIZE;

    private:
        unsigned int portionsSize;

    public:
        Dieta(const unsigned int amountConsumedPortions);
        virtual ~Dieta();

        double calcConsumedPortionsInKg(const unsigned int amountConsumedPortions);

        void setPortionsSize(const unsigned int portionsSize);
        unsigned int getPortionsSize() const;
};

#endif
