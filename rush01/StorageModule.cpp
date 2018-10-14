#include "StorageModule.hpp"


StorageModule::StorageModule() : name("User's storage info"), is_buffer(false)
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

	system("bash storage.sh");
	std::ifstream		istorage("temp");

	std::getline(istorage, tmp);
	tmp = "User's storage capacity:" + tmp;
	if (data.empty())
		data.push_back(tmp);
	else
		data[0] = tmp;

	std::getline(istorage, tmp);
	tmp = "User's storage available:" + tmp;
	if (data.size() == 1)
		data.push_back(tmp);
	else
		data[1] = tmp;

	istorage.close();
}

std::string const &	StorageModule::getName() const
{
	return name;
}

bool 	 			StorageModule::isBuff() const
{
	return is_buffer;
}
