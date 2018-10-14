#ifndef RAMMODULE_HPP
#define RAMMODULE_HPP

#include "IMonitorModule.hpp"

class RAMModule : public IMonitorModule
{

	RAMModule(RAMModule const &cpu);
	RAMModule & operator=(RAMModule const &cpu);

	std::vector<std::string>	data;

public:
	RAMModule();
	virtual ~RAMModule();

	virtual std::vector<std::string> const & getData() const;
	virtual void parseData();
	
};

#endif