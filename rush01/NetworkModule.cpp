#include "NetworkModule.hpp"


NetworkModule::NetworkModule()
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

	system("ipconfig getifaddr en0 > temp");
	std::ifstream		iip("temp");
	std::getline(iip, tmp);
	tmp = "IP address: " + tmp;
	if (data.empty())
	{
		data.push_back(tmp);
	}
	else
	{
		data[0] = tmp;
	}
	iip.close();

	system("top -l1 -n1 | grep 'Networks' | cut -d ':' -f3 | cut -d '.' -f1 > temp");
	std::ifstream		icpu_us("temp");
	std::getline(icpu_us, tmp);
	tmp = "Network traffic:" + tmp;
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

