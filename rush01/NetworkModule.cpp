#include "NetworkModule.hpp"


NetworkModule::NetworkModule() : name("Network info"), is_buffer(false)
{}

NetworkModule::~NetworkModule()
{}

std::vector<std::string> const & NetworkModule::getData() const
{
	return data;
}

void NetworkModule::parseData()
{
	std::string 	tmp;

	system("bash network.sh");
	std::ifstream		inetwork("temp");

	std::getline(inetwork, tmp);
	tmp = "IP address: " + tmp;
	if (data.empty())
		data.push_back(tmp);
	else
		data[0] = tmp;

	std::getline(inetwork, tmp);
	tmp = "Network traffic:" + tmp;
	if (data.size() == 1)
		data.push_back(tmp);
	else
		data[1] = tmp;

	inetwork.close();
}

std::string const &	NetworkModule::getName() const
{
	return name;
}

bool 	 			NetworkModule::isBuff() const
{
	return is_buffer;
}

