#include "StorageModule.hpp"


StorageModule::StorageModule()
{}

StorageModule::~StorageModule()
{}

std::vector<std::string> const & StorageModule::getData() const
{
	return data;
}

void StorageModule::parseData()
{
	std::string 	tmp;

	system("system_profiler SPStorageDataType | tail -n20 | grep 'Capacity' | cut -d ':' -f 2 > temp");
	std::ifstream		icapacity("temp");
	std::getline(icapacity, tmp);
	tmp = "User's storage capacity:" + tmp;
	if (data.empty())
	{
		data.push_back(tmp);
	}
	else
	{
		data[0] = tmp;
	}
	icapacity.close();

	system("system_profiler SPStorageDataType | tail -n20 | grep 'Available' | cut -d ':' -f 2 > temp");
	std::ifstream		icpu_us("temp");
	std::getline(icpu_us, tmp);
	tmp = "User's storage available:" + tmp;
	if (data.size() == 1)
	{
		data.push_back(tmp);
	}
	else
	{
		data[1] = tmp;
	}
	icpu_us.close();
}
