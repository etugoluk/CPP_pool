#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <string>

class Logger
{
	std::string filename;

	void logToConsole(std::string str);
	void logToFile(std::string str);
	std::string makeLogEntry(std::string msg);
	void log(std::string const & dest, std::string const & message);
public:
	Logger();
	~Logger();
};

#endif