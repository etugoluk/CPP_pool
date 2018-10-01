#include "Fixed.hpp"

int main(int argc, char **argv) {
	if (argc != 2)
	{
		std::cout << "Bad arguments" << std::endl;
		return (0);
	}

	std::string s = argv[1];
	int *arr = new int[s.length()];
	int j = 0;
	float f;
	stringstream ss;
	// std::string str;

	for (size_t i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
		{
			arr[i] = ++j;
		}
		else if (s[i] == ')')
		{
			arr[i] = --j;
		}
		else if (strchr("+-*/", s[i]))
		{
			arr[i] = --j;
		}
		else if (strchr(" \t", s[i]))
			continue;
		else if (strchr("-0123456789", s[i]))
		{
			arr[i] = ++j;
			ss << s.substr(i, s.length() - i);
			ss >> f;
			i += 
		}

	}
	return (0);
}