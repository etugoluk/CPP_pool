#include "ZazModule.hpp"

ZazModule::ZazModule() : aminal("               |))    |))\n .             |  )) /   ))\n \\   ^ ^      |    /      ))\n  \\(((  )))   |   /        ))\n   / G    )))  |  /        ))\n  |o  _)   ))) | /       )))\n   --' |     ))`/      )))\n    ___|              )))\n   / __\\             ))))`()))\n  /\\@   /             `(())))\n  \\/   /  /`_______/\\   \\  ))))\n       | |          \\ \\  |  )))\n       | |           | | |   )))\n       |_@           |_|_@    ))\n      /_/           /_/_/") {}

ZazModule::~ZazModule() {}

std::string ZazModule::getData() const {
	return animal;
}
