#ifndef CPUMODULE_HPP
#define CPUMODULE_HPP

#include "IMonitorModule.hpp"

class CPUModule : public IMonitorModule
{

	CPUModule(CPUModule const &cpu);
	CPUModule & operator=(CPUModule const &cpu);

	std::vector<std::string>	data;

public:
	CPUModule();
	virtual ~CPUModule();

	virtual std::vector<std::string> const & getData() const;
	virtual void parseData();
	
};

#endif