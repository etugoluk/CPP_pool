#include "ZazModule.hpp"

ZazModule::ZazModule() : name("Zaz info"), zaz_itr(0), is_buffer(false)
{
	zaz.push_back("            _,'|             _.-''``-...___..--';)\n           /_ \'.      __..-' ,      ,--...--'''\n          <\\    .`--'''       `     /'\n           `-';'               ;   ; ;\n     __...--''     ___...--_..'  .;.'\n    (,__....----'''       (,..--''   ");
	zaz.push_back("    (-`-''-/\").___..--''\"'-._\n     `6_ 6  )   `-.  (     ).`-.__.`)\n     (_Y_.)\'  ._   )  `._ `. ``-..-\'\n   _..`--\'_..-_/  /--\'_.\' ,\'\n  ,-''  ,\'  ((!.-'    ");
	zaz.push_back("     (\"`-/\")_.-'\"``-._\n      . . `; -._    )-;-,_`)\n     (v_,)'  _  )`-.\\  ``-'\n    _.- _..-_/ / ((.'\n  ((,.-'   ((,/    ");
	zaz.push_back("   |\\      _,,,---,,_\n   /,`.-'`'    -.  ;-;;,_\n  |,4-  ) )-,_..;\\ (  `'-'\n '---''(_/--'  `-'\\_) ");

	data.push_back(zaz[0]);
}

ZazModule::~ZazModule()
{}

std::vector<std::string> const & ZazModule::getData() const
{
	return data;
}

void ZazModule::parseData()
{
	++zaz_itr;
	if (zaz_itr > 3)
		zaz_itr = 0;
	data[0] = zaz[zaz_itr];
}

std::string const &	ZazModule::getName() const
{
	return name;
}

bool 	 			ZazModule::isBuff() const
{
	return is_buffer;
}

std::list<int> const &	ZazModule::getBuff() const
{
	return buff;
}

