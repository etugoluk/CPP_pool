#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

class Logger
{
	std::string filename;

	void logToConsole(std::string const &str);
	void logToFile(std::string const &str);
	std::string makeLogEntry(std::string msg);
	
public:
	void setFilename(std::string const &name);
	void log(std::string const & dest, std::string const & message);
};

#endif