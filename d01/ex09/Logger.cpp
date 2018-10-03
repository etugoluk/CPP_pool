// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Logger.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:32:55 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:32:56 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Logger.hpp"
#include <unistd.h>

void Logger::setFilename(std::string const &name)
{
	this->filename = name;
}

void Logger::logToConsole(std::string const &str)
{
	std::cout << str << std::endl;
}

void Logger::logToFile(std::string const &str)
{
	std::ofstream os;
	os.open(this->filename, std::fstream::app);
	if (access(this->filename.c_str(), W_OK) == -1)
	{
		std::cout << this->filename << ": Permission denied" << std::endl;
		os.close();
		return ;
	}
	os << str + "\n";
	os.close();
}

std::string Logger::makeLogEntry(std::string msg)
{
	time_t	t = time(0);
	struct tm* now  = localtime(&t);
	char buf[18];
	strftime (buf, 18,"[%Y%m%d_%H%M%S] ",now);
	return buf + msg;
}

void Logger::log(std::string const & dest, std::string const & message)
{
	std::string arr[] = {"console", "file"};

	void (Logger::*ptr[2])(std::string const & dest);
	ptr[0] = &Logger::logToConsole;
	ptr[1] = &Logger::logToFile;

	for (int i = 0; i < 2; i++)
	{
		if (!dest.compare(arr[i]))
			(this->*(ptr[i]))(makeLogEntry(message));
	}
}