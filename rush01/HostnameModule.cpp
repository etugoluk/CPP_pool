#include "HostnameModule.hpp"

// HostnameModule::HostnameModule() : hostname ("default"), username("default") {}

// HostnameModule::HostnameModule(std::string host, std::string user) : hostname (host), username(user) {}

HostnameModule::HostnameModule() : name("Host info"), is_buffer(false)
{}
HostnameModule::~HostnameModule()
{}

// std::string HostnameModule::getHostname() const {
// 	return hostname;
// }

// std::string HostnameModule::getUsername() const {
// 	return username;
// }

// void HostnameModule::setHostname(std::string) {
// 	this->hostname = hostname;
// }

// void HostnameModule::setUsername(std::string) {
// 	this->username = username;
// }

std::vector<std::string> const & HostnameModule::getData() const
{
	return data;
}

void HostnameModule::parseData()
{
	std::string 	tmp;


	system("who | grep 'console' | cut -d ' ' -f 1 > temp");
	std::ifstream		iuser("temp");
	std::getline(iuser, tmp);
	tmp = "Username: " + tmp;
	if (data.empty())
	{
		data.push_back(tmp);
	}
	else
	{
		data[0] = tmp;
	}
	iuser.close();

	system("hostname > temp");
	std::ifstream		ihost("temp");
	std::getline(ihost, tmp);
	tmp = "Hostname: " + tmp;
	if (data.size() == 1)
	{
		data.push_back(tmp);
	}
	else
	{
		data[1] = tmp;
	}
	ihost.close();
}

std::string const &	HostnameModule::getName() const
{
	return name;
}

bool 	 			HostnameModule::isBuff() const
{
	return is_buffer;
}