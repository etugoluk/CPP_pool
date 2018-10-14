#include "ZazModule.hpp"

ZazModule::ZazModule() : name("Zaz info"), is_buffer(false)
{
	data.push_back("            _,'|             _.-''``-...___..--';)\n           /_ \'.      __..-' ,      ,--...--'''\n          <\\    .`--'''       `     /'\n           `-';'               ;   ; ;\n     __...--''     ___...--_..'  .;.'\n    (,__....----'''       (,..--''   ");
	data.push_back("    (-`-''-/\").___..--''\"'-._\n     `6_ 6  )   `-.  (     ).`-.__.`)\n     (_Y_.)\'  ._   )  `._ `. ``-..-\'   _..`--\'_..-_/  /--\'_.\' ,\'  (il),-''  (li),\'  ((!.-'    ");
	data.push_back("     (\"`-/\")_.-'\"``-._\n      . . `; -._    )-;-,_`)\n     (v_,)'  _  )`-.\\  ``-'\n    _.- _..-_/ / ((.'\n  ((,.-'   ((,/    ");
	data.push_back("   |\\      _,,,---,,_\n   /,`.-'`'    -.  ;-;;,_\n  |,4-  ) )-,_..;\\ (  `'-'\n '---''(_/--'  `-'\\_) ");
}

ZazModule::~ZazModule()
{}

std::vector<std::string> const & ZazModule::getData() const
{
	return data;
}

void ZazModule::parseData()
{
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
