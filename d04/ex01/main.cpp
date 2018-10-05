#include "PlasmaRifle.cpp"
#include "PowerFist.cpp"
#include "Enemy.cpp"
#include "Character.cpp"

int main() {
	
	Character* zaz = new Character(``zaz'');

	std::cout << *zaz;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);

	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;

	return 0;
}