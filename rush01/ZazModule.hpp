#ifndef ZAZMODULE_HPP
#define ZAZMODULE_HPP

class ZazModule : public IMonitorModule
{
	std::string animal const;

	ZazModule(ZazModule const &z);
	ZazModule & operator=(ZazModule const &z);
public:
	ZazModule();
	~ZazModule();
	
	std::string getData() const;
};

#endif