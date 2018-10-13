#include "ShellDisplay.hpp"

// ShellDisplay::ShellDisplay() {}

ShellDisplay::ShellDisplay(std::vector<IMonitorModule *> & 	modules) : mod(modules) {}

ShellDisplay::~ShellDisplay() {}

void ShellDisplay::show() {
	initscr();

	char ch;

	while (1) {
		std::vector<IMonitorModule *>::iterator		ibeg = mod.begin();
		std::vector<IMonitorModule *>::iterator		iend = mod.end();
			for (std::vector<IMonitorModule *>::iterator i = ibeg; i != iend; ++i)
			{
				(*i)->parseData();
				for (int k = 0; k < (*i)->getData().size(); ++k)
				{
					mvprintw(0, 0, "%s\n", ((*i)->getData())[k].c_str());
				}
			refresh();
			usleep(3000);
		}
		ch = getch();
		if (ch == 'q')
			break;
	}
	endwin();
}