#include "Logger.hpp"

int main()
{
	Logger l;
	l.setFilename("out");
	l.log("console", "write to console");
	l.log("file", "write to file");
	return (0);
}