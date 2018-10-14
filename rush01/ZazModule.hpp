#ifndef ZAZMODULE_HPP
#define ZAZMODULE_HPP

#include "IMonitorModule.hpp"

class ZazModule : public IMonitorModule
{

	ZazModule(ZazModule const &z);
	ZazModule & operator=(ZazModule const &z);

	std::vector<std::string>	data;
	std::string					name;
	bool						is_buffer;
	std::list<int>				buff;
	
public:
	ZazModule();
	virtual ~ZazModule();
	
	virtual std::vector<std::string> const & getData() const;
	virtual void parseData();

	virtual std::string const &	getName() const;
	virtual bool 	 			isBuff() const;

	virtual std::list<int> const &	getBuff() const;
};

#endif