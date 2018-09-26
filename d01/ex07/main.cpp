#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Incorrect parameters" << std::endl;
		return (0);
	}

	std::ifstream is(argv[1]);
	if (!is.is_open())
	{
		std::cout << "File doesn't exist" << std::endl;
		return (0);
	}

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
