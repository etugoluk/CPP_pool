#ifndef IMONITORMODULE_HPP
#define IMONITORMODULE_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

class IMonitorModule
{
public:
	virtual ~IMonitorModule() {};

	virtual std::vector<std::string> const & getData() const = 0;
	virtual void parseData() = 0;
};

#endif