#include "OSModule.hpp"


OSModule::OSModule() : name("OS info"), is_buffer(false)
{}

OSModule::~OSModule()
{}

std::vector<std::string> const & OSModule::getData() const
{
	return data;
}

void OSModule::parseData()
{
	std::string 	tmp;

	system("bash os.sh");
	std::ifstream		ios("temp");

	std::getline(ios, tmp);
	tmp.replace(0, std::string("ProductName:\t").size(), std::string("OS name: "));
	if (data.empty())
		data.push_back(tmp);
	else
		data[0] = tmp;

	std::getline(ios, tmp);
	tmp.replace(0, std::string("ProductVersion:\t").size(), std::string("OS version: "));
	if (data.size() == 1)
		data.push_back(tmp);
	else
		data[1] = tmp;

	std::getline(ios, tmp);
	tmp.replace(0, std::string("BuildVersion:\t").size(), std::string("OS build: "));
	if (data.size() == 2)
		data.push_back(tmp);
	else
		data[2] = tmp;
	
	ios.close();
}

std::string const &	OSModule::getName() const
{
	return name;
}

bool 	 			OSModule::isBuff() const
{
	return is_buffer;
}
