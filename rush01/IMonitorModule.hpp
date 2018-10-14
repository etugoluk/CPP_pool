#ifndef IMONITORMODULE_HPP
#define IMONITORMODULE_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
#include <list>

#define	MAX_MODULE_BUFFER_SIZE 15

class IMonitorModule
{
public:
	virtual ~IMonitorModule() {};

	virtual std::vector<std::string> const & getData() const = 0;
	virtual void parseData() = 0;

	virtual std::string const &	getName() const = 0;
	virtual bool 	 			isBuff() const = 0;

	// virtual std::list<int> const &	getBuff() const = 0;
};

#endif