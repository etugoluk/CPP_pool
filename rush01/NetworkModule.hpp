#ifndef NETWORKMODULE_HPP
#define NETWORKMODULE_HPP

#include "IMonitorModule.hpp"

class NetworkModule : public IMonitorModule
{

	NetworkModule(NetworkModule const &cpu);
	NetworkModule & operator=(NetworkModule const &cpu);

	std::vector<std::string>	data;

	std::string					name;
	bool						is_buffer;


public:
	NetworkModule();
	virtual ~NetworkModule();

	virtual std::vector<std::string> const & getData() const;
	virtual void parseData();

	virtual std::string const &	getName() const;
	virtual bool 	 			isBuff() const;
};

#endif