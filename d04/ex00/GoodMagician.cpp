#include "GoodMagician.hpp"

GoodMagician::GoodMagician(std::string name, std::string title) : Sorcerer(name, title) {}

GoodMagician::~GoodMagician(){}

void GoodMagician::SalvioHexia(Victim const & v) {
	std::cout << ".･:*:･ﾟ’✫,’✫’ﾟ･:*:･˙" << std::endl;
	std::cout << "!!!SALVIO HEXIA!!!" << std::endl;
	std::cout << ".･:*:･ﾟ’✫,’✫’ﾟ･:*:･˙" << std::endl;
	std::cout << this->name << " protects " << v.getName() << " from bad magicians!" << std::endl;
}