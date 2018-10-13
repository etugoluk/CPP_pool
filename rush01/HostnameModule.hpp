#ifndef HOSTNAMEMODULE_HPP
#define HOSTNAMEMODULE_HPP

#include "IMonitorModule.hpp"

class HostnameModule: public IMonitorModule
{
	std::string hostname;
	std::string username;

	HostnameModule(HostnameModule const &h);
	HostnameModule & operator=(HostnameModule const &h);

public:
	HostnameModule();
	HostnameModule(std::string, std::string);
	~HostnameModule();

	std::string getHostname() const;
	std::string getUsername() const;
	void setHostname(std::string);
	void setUsername(std::string);
};

#endif