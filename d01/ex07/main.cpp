// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:31:14 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:31:15 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Incorrect parameters" << std::endl;
		return (0);
	}

	struct stat status;
	if (stat(argv[1], &status) == -1)
	{
		std::cout << argv[1] << ": No such file or directory" << std::endl;
		return (0);
	}
	else if (S_ISDIR(status.st_mode))
	{
		std::cout << argv[1] << ": is a directory" << std::endl;
		return (0);
	}
	else if (access(argv[1], R_OK) == -1)
	{
		std::cout << argv[1] << ": Permission denied" << std::endl;
		return (0);
	}

	std::ifstream is(argv[1]);
	std::stringstream ss;
	std::string str, s1 = argv[2], s2 = argv[3];

	ss << is.rdbuf();
	str = ss.str();
	is.close();

	size_t pos = 0;
	while (1)
	{
		pos = str.find(s1, pos);
		if (pos == std::string::npos)
			break;
		str.replace(pos, s1.length(), s2);
		pos += s2.length();
	}

	std::string s(argv[1]);
	std::ofstream os(s + ".replace");
	os << str;
	os.close();

	return (0);
}
