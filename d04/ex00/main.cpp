#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "GoodMagician.hpp"
#include "BadMagician.hpp"

int main() {
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	BadMagician bad("Volan de Mort", "Avada Cavadra guy");
	GoodMagician good("Harry Potter", "The boy who survived");

	bad.Crucio(good);
	good.SalvioHexia(joe);
	bad.Crucio(jim);

	return 0;
}