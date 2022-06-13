#ifndef CUIDADOR_HPP
#define CUIDADOR_HPP

#include <string>

class Cuidador {
	private:
		std::string name;
		std::string cpf;
		std::string phone;
		std::string birthday; // TODO: Fix - Transformar em date?
		std::string wage; // TODO: Fix - Transformar em double

	public:
		void print() const;

		void setName(const std::string name);
		std::string getName() const;

		void setCpf(const std::string cpf);
		std::string getCpf() const;

		void setPhone(const std::string phone);
		std::string getPhone() const;

		void setBirthday(const std::string birthday);
		std::string getBirthday() const;

		void setWage(const std::string name);
		std::string getWage() const;
};

#endif
