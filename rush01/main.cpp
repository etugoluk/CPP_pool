#include "SDLDisplay.hpp"
#include "ShellDisplay.hpp"

#include "IMonitorModule.hpp"
#include "CPUModule.hpp"

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char **argv) {

	if (argc != 2)
	{
		std::cout << "Usage:./ft_gkrellm [text]|[graphic]" << std::endl;
		return (0);
	}
	std::string		argument(argv[1]);
	if (argument != "graphic" && argument != "text")
	{
		std::cout << "Usage:./ft_gkrellm [text]|[graphic]" << std::endl;
		return (0);
	}

	std::vector<IMonitorModule *>	modules;
	modules.push_back(new CPUModule);
	
	if (!strcmp(argv[1],"graphic")) {
		SDLDisplay sdl(modules);
		try {
			sdl.show();
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	if (!strcmp(argv[1],"text")) {
		ShellDisplay sh(modules);
		sh.show();
	}

	return (0);
}