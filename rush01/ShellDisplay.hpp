#ifndef SHELLDISPLAY_HPP
#define SHELLDISPLAY_HPP

#include "IMonitorDisplay.hpp"
#include "IMonitorModule.hpp"

#include <ncurses.h>
#include <signal.h>
#include <iostream>
// #include <unistd.h>

class ShellDisplay : public IMonitorDisplay
{
	ShellDisplay();
	ShellDisplay(ShellDisplay const &s);
	ShellDisplay & operator=(ShellDisplay const &s);

	std::vector<IMonitorModule *> &	mod;

public:
	ShellDisplay(std::vector<IMonitorModule *> & 	modules);
	virtual ~ShellDisplay();
	
	virtual void show();
};

#endif