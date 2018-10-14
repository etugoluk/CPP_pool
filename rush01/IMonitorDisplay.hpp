#ifndef IMONITORDISPLAY_HPP
#define IMONITORDISPLAY_HPP

#include <iostream>

class IMonitorDisplay
{
public:
	virtual ~IMonitorDisplay() {};
	virtual void show() = 0;
};

#endif