#ifndef HOSTNAMEMODULE_HPP
#define HOSTNAMEMODULE_HPP

#include "IMonitorModule.hpp"

class HostnameModule: public IMonitorModule
{

	std::vector<std::string>	data;

	std::string					name;
	bool						is_buffer;


	HostnameModule(HostnameModule const &h);
	HostnameModule & operator=(HostnameModule const &h);

public:
	HostnameModule();
	// HostnameModule(std::string, std::string);
	virtual ~HostnameModule();

	// std::string getHostname() const;
	// std::string getUsername() const;
	// void setHostname(std::string);
	// void setUsername(std::string);

	virtual std::vector<std::string> const & getData() const;
	virtual void parseData();
	
	virtual std::string const &	getName() const;
	virtual bool 	 			isBuff() const;
};

#endif