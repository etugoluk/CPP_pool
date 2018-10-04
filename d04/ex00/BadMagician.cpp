#include "BadMagician.hpp"

BadMagician::BadMagician(std::string name, std::string title) : Sorcerer(name, title) {}

BadMagician::~BadMagician(){}

void BadMagician::Crucio(Victim &v) {
	std::cout << ".･:*:･ﾟ’✫,’✫’ﾟ･:*:･˙" << std::endl;
	std::cout << "!!!CRUCIO!!!" << std::endl;
	std::cout << ".･:*:･ﾟ’✫,’✫’ﾟ･:*:･˙" << std::endl;
	std::cout << this->name << " causes agonising pain to " << v.getName() << std::endl;
}

void BadMagician::Crucio(Sorcerer &s) {
	std::cout << ".･:*:･ﾟ’✫,’✫’ﾟ･:*:･˙" << std::endl;
	std::cout << "!!!CRUCIO!!!" << std::endl;
	std::cout << ".･:*:･ﾟ’✫,’✫’ﾟ･:*:･˙" << std::endl;
	std::cout << this->name << " causes agonising pain to " << s.getName() << std::endl;
}
