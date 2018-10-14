#ifndef OSMODULE_HPP
#define OSMODULE_HPP

#include "IMonitorModule.hpp"

class OSModule : public IMonitorModule
{
	OSModule(OSModule const &cpu);
	OSModule & operator=(OSModule const &cpu);
	
	std::vector<std::string>	data;
	
public:
	OSModule();
	virtual ~OSModule();

	virtual std::vector<std::string> const & getData() const;
	virtual void parseData();
	
};

#endif