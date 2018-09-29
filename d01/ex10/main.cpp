#include <iostream>
#include <fstream>
#include <string>
#include <sys/types.h>

void files(int argc, char **argv)
{
	std::ifstream is;
	std::string s;
	// struct stat status;

	for (int i = 1; i < argc; i++)
	{
		is.open(argv[i], std::ifstream::in);
		if (!is.is_open())
		{
			std::cout << "cat: " << argv[i] << ": No such file or directory" << std::endl;
			continue;
		}
		while (std::getline(is, s))
		{
			std::cout << s << std::endl;
		}
		is.close();
	}
}

void console()
{
	std::string s;

	while (std::getline(std::cin, s))
	{
		std::cout << s << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc > 1)
		files(argc, argv);
	else
		console();
	return (0);
}