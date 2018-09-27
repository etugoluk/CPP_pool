#include "Logger.hpp"

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
	std::ofstream os(this->filename);
	os << str;
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