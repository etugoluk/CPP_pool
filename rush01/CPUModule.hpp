#ifndef CPUMODULE_HPP
#define CPUMODULE_HPP

#include "IMonitorModule.hpp"

class CPUModule : public IMonitorModule
{

	CPUModule(CPUModule const &cpu);
	CPUModule & operator=(CPUModule const &cpu);


	std::vector<std::string>	data;
	std::string					name;
	bool						is_buffer;
	std::list<int>				buff;

public:
	CPUModule();
	virtual ~CPUModule();

	virtual std::vector<std::string> const & getData() const;
	virtual void parseData();

	virtual std::string const &	getName() const;
	virtual bool 	 			isBuff() const;

	virtual std::list<int> const &	getBuff() const;
	
};

#endif