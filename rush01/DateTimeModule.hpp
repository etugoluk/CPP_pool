#ifndef DATETIMEMODULE_HPP
#define DATETIMEMODULE_HPP

#include "IMonitorModule.hpp"

class DateTimeModule : public IMonitorModule
{
	DateTimeModule(DateTimeModule const &cpu);
	DateTimeModule & operator=(DateTimeModule const &cpu);
	
	std::vector<std::string>	data;

	std::string					name;
	bool						is_buffer;

	
public:
	DateTimeModule();
	virtual ~DateTimeModule();

	virtual std::vector<std::string> const & getData() const;
	virtual void parseData();
	
	virtual std::string const &	getName() const;
	virtual bool 	 			isBuff() const;
};

#endif