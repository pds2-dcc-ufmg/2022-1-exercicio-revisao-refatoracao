#ifndef CUIDADOR_HPP
#define CUIDADOR_HPP

#include <string>

#include "../IPrintable/IPrintable.hpp"

class Cuidador : public IPrintable {
	private:
		std::string name;
		std::string cpf;
		std::string phone;
		std::string birthday; // TODO: Fix - Transformar em date?
		double wage;

	public:
		virtual void print() const override;

		void setName(const std::string name);
		std::string getName() const;

		void setCpf(const std::string cpf);
		std::string getCpf() const;

		void setPhone(const std::string phone);
		std::string getPhone() const;

		void setBirthday(const std::string birthday);
		std::string getBirthday() const;

		void setWage(const double name);
		double getWage() const;
		std::string getFormattedWage() const;
};

#endif
