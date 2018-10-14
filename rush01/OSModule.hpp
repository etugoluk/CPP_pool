#ifndef OSMODULE_HPP
#define OSMODULE_HPP

#include "IMonitorModule.hpp"

class OSModule : public IMonitorModule
{
	OSModule(OSModule const &cpu);
	OSModule & operator=(OSModule const &cpu);
	
	std::vector<std::string>	data;

	std::string					name;
	bool						is_buffer;

public:
	OSModule();
	virtual ~OSModule();

	virtual std::vector<std::string> const & getData() const;
	virtual void parseData();
	
	virtual std::string const &	getName() const;
	virtual bool 	 			isBuff() const;
};

#endif