#include "ShellDisplay.hpp"

// ShellDisplay::ShellDisplay() {}

ShellDisplay::ShellDisplay(std::vector<IMonitorModule *> & 	modules) : mod(modules)
{}

ShellDisplay::~ShellDisplay()
{}

void ShellDisplay::show()
{
	initscr();
	nodelay(stdscr, true);

	char ch;


	box(stdscr, 0, 0);

	while (1)
	{
		std::vector<IMonitorModule *>::iterator		ibeg = mod.begin();
		std::vector<IMonitorModule *>::iterator		iend = mod.end();
			
		int q = 1;
		for (std::vector<IMonitorModule *>::iterator i = ibeg; i != iend; ++i)
		{
			(*i)->parseData();
			for (int k = 0; k < (*i)->getData().size(); ++k)
			{
				mvprintw(q, 2, "%s\n", ((*i)->getData())[k].c_str());
				q++;
			}
			mvprintw(q++, 2, "");
			refresh();
			// usleep(3000);
		}
		ch = getch();
		if (ch == 'q')
			break;
	}
	endwin();

}