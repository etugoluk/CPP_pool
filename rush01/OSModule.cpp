#include "OSModule.hpp"


OSModule::OSModule()
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

	system("sw_vers | grep 'ProductName' > temp");
	std::ifstream		iname("temp");
	std::getline(iname, tmp);
	tmp.replace(0, std::string("ProductName:").size(), std::string("OS name: "));
	if (data.empty())
	{
		data.push_back(tmp);
	}
	else
	{
		data[0] = tmp;
	}
	iname.close();

	system("sw_vers | grep 'ProductVersion' > temp");
	std::ifstream		iver("temp");
	std::getline(iver, tmp);
	tmp.replace(0, std::string("ProductVersion:").size(), std::string("OS version: "));
	if (data.size() == 1)
	{
		data.push_back(tmp);
	}
	else
	{
		data[1] = tmp;
	}
	iver.close();

	system("sw_vers | grep 'BuildVersion' > temp");
	std::ifstream		ibuild("temp");
	std::getline(ibuild, tmp);
	tmp.replace(0, std::string("BuildVersion:").size(), std::string("OS build: "));
	if (data.size() == 2)
	{
		data.push_back(tmp);
	}
	else
	{
		data[2] = tmp;
	}
	ibuild.close();
}