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

	system("top -l1 -n1 | grep 'PhysMem:' | cut -d ' ' -f 2-3,6-7 | cut -d '.' -f 1 > temp");
	std::ifstream		iusage("temp");
	std::getline(iusage, tmp);
	tmp = "RAM usage: " + tmp;
	if (data.empty())
	{
		data.push_back(tmp);
	}
	else
	{
		data[0] = tmp;
	}
	iusage.close();

	system("system_profiler SPMemoryDataType | grep 'Type' | head -n1 | cut -d ':' -f2 > temp");
	std::ifstream		itype("temp");
	std::getline(itype, tmp);
	tmp = "RAM type: " + tmp;
	if (data.size() == 1)
	{
		data.push_back(tmp);
	}
	else
	{
		data[1] = tmp;
	}
	itype.close();

	system("system_profiler SPMemoryDataType | grep 'Speed' | head -n1 | cut -d ':' -f2 > temp");
	std::ifstream		ispeed("temp");
	std::getline(ispeed, tmp);
	tmp = "RAM speed:" + tmp;
	if (data.size() == 2)
	{
		data.push_back(tmp);
	}
	else
	{
		data[2] = tmp;
	}
	ispeed.close();
}

std::string const &	RAMModule::getName() const
{
	return name;
}

bool 	 			RAMModule::isBuff() const
{
	return is_buffer;
}
