#include <iostream>
#include <ctime>

int main()
{
	time_t	t = time(0);
	struct tm* now  = localtime(&t);
	char buf[15];
	strftime (buf, 15,"%y%m%d_%H%M%S",now);
	std::cout << "[" << buf << "]" << std::endl;
	return (0);
}