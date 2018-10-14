#include "ShellDisplay.hpp"

#include "CPUModule.hpp"

// ShellDisplay::ShellDisplay() {}

ShellDisplay::ShellDisplay(std::vector<IMonitorModule *> & 	modules) : mod(modules)
{}

ShellDisplay::~ShellDisplay()
{}

void	ShellDisplay::makeDiagramm(std::list<int>::const_iterator const & beg, \
				std::list<int>::const_iterator const & end, int & line, std::string name)
{
	init_pair(1, COLOR_BLACK, COLOR_RED);

	mvprintw(line++, 2, "------------------------- %s ----------------------------", name.c_str());

	for (int i = 0; i < 10; ++i, ++line)
	{
		mvprintw(line, 2, "|");
		int j = -1;
		for (std::list<int>::const_iterator it = beg; it != end; ++it, ++++++++j)
		{
			attron(COLOR_PAIR(1));
			if (*it / 10 - 1 < i)
			{
				if (i == 9)
					mvprintw(line, 5 + j, " %d ", 100 - *it);
				else
					mvprintw(line, 5 + j, "    ");
			}
			attroff(COLOR_PAIR(1));
		}
		mvprintw(line, 65, "|");
	}

	mvprintw(line++, 2, "----------------------------------------------------------------");
}

void ShellDisplay::show()
{
	initscr();
	nodelay(stdscr, true);
	noecho();
	cbreak();
	curs_set(0);
	// keypad(stdscr, true);
	start_color();
	refresh();

	int input;



	while (1)
	{
		input = getch();
		if (input == 'q')
			break;

		init_pair(2, COLOR_BLACK, COLOR_GREEN);
		int q = 1;

		std::vector<IMonitorModule *>::iterator		ibeg = mod.begin();
		std::vector<IMonitorModule *>::iterator		iend = mod.end();
		clear();
		for (std::vector<IMonitorModule *>::iterator i = ibeg; i != iend; ++i)
		{
			char		tmp[] = "                     ";
			(*i)->getName().copy(&tmp[(sizeof(tmp) - (*i)->getName().length()) / 2], (*i)->getName().length());
			attron(COLOR_PAIR(2));
			mvprintw(q++, 1, "###################### %s ######################", tmp);
			attroff(COLOR_PAIR(2));
			(*i)->parseData();
			for (unsigned k = 0; k < (*i)->getData().size(); ++k)
			{
				mvprintw(q++, 2, "%s", ((*i)->getData())[k].c_str());
			}
			if ((*i)->isBuff())
			{
				CPUModule *		cpu = dynamic_cast<CPUModule *>(*i);
				if (cpu)
				{
					// mvprintw(q++, 10, "---");
					makeDiagramm(cpu->getBuff().begin(), cpu->getBuff().end(), q, std::string("CPU usage"));
					// mvprintw(q++, 10, "---");
				}
			}
			mvprintw(q++, 2, "");
		}
		box(stdscr, 0, 0);
		refresh();
	}


	endwin();
}