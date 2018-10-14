#include "RAMModule.hpp"


RAMModule::RAMModule() : name("Memory info"), is_buffer(false)
{}

RAMModule::~RAMModule()
{}

std::vector<std::string> const & RAMModule::getData() const
{
	return data;
}

void RAMModule::parseData()
{
	std::string 	tmp;

	system("bash ram.sh");
	std::ifstream		iram("temp");
	std::getline(iram, tmp);
	tmp = "RAM usage: " + tmp;
	if (data.empty())
		data.push_back(tmp);
	else
		data[0] = tmp;

	std::getline(iram, tmp);
	tmp = "RAM type: " + tmp;
	if (data.size() == 1)
		data.push_back(tmp);
	else
		data[1] = tmp;

	std::getline(iram, tmp);
	tmp = "RAM speed:" + tmp;
	if (data.size() == 2)
		data.push_back(tmp);
	else
		data[2] = tmp;
	iram.close();
}

std::string const &	RAMModule::getName() const
{
	return name;
}

bool 	 			RAMModule::isBuff() const
{
	return is_buffer;
}
