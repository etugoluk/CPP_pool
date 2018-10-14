#ifndef STORAGEMODULE_HPP
#define STORAGEMODULE_HPP

#include "IMonitorModule.hpp"

class StorageModule : public IMonitorModule
{

	StorageModule(StorageModule const &cpu);
	StorageModule & operator=(StorageModule const &cpu);

	std::vector<std::string>	data;

	std::string					name;
	bool						is_buffer;


public:
	StorageModule();
	virtual ~StorageModule();

	virtual std::vector<std::string> const & getData() const;
	virtual void parseData();
	
	virtual std::string const &	getName() const;
	virtual bool 	 			isBuff() const;
	
};

#endif
