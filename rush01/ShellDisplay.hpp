#ifndef SHELLDISPLAY_HPP
#define SHELLDISPLAY_HPP

#include "IMonitorDisplay.hpp"
#include "IMonitorModule.hpp"
#include <ncurses.h>
#include <unistd.h>

class ShellDisplay : public IMonitorDisplay
{
	ShellDisplay();
	ShellDisplay(ShellDisplay const &s);
	ShellDisplay & operator=(ShellDisplay const &s);

	std::vector<IMonitorModule *> &	mod;
public:
	// ShellDisplay();
	ShellDisplay(std::vector<IMonitorModule *> & 	modules);
	~ShellDisplay();
	
	void show();
};

#endif