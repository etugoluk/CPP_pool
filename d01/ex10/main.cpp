// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:33:22 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:33:23 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>
#include <string>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void files(int argc, char **argv) {
	
	std::ifstream is;
	std::string s;
	struct stat status;

	for (int i = 1; i < argc; i++)
	{
		if (stat(argv[i], &status) == -1)
		{
			std::cout << "cat: " << argv[i] << ": No such file or directory" << std::endl;
			continue;
		}
		else if (S_ISDIR(status.st_mode))
		{
			std::cout << "cat: " << argv[i] << ": is a directory" << std::endl;
			continue;
		}
		else if (access(argv[i], R_OK) == -1)
		{
			std::cout << "cat: " << argv[i] << ": Permission denied" << std::endl;
			continue;
		}
		else
		{
			is.open(argv[i], std::ifstream::in);
			while (std::getline(is, s))
			{
				std::cout << s << std::endl;
			}
			is.close();
		}
	}
}

void console() {
	std::string s;

	while (std::getline(std::cin, s))
	{
		std::cout << s << std::endl;
	}
}

int main(int argc, char **argv) {
	if (argc > 1)
		files(argc, argv);
	else
		console();
	return (0);
}