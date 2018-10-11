#include "Array.hpp"

int main() {
	Array<int> integers(5);
	Array<double> doubles(5);
	Array<char> chars(5);

	std::cout << "ARRAY OF INTEGERS" << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		integers[i] = i;
		std::cout << integers[i] << std::endl;
	}

	std::cout << "ARRAY OF DOUBLES" << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		doubles[i] = i;
		std::cout << doubles[i] << std::endl;
	}

	std::cout << "ARRAY OF CHARS" << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		chars[i] = 65 + i;
		std::cout << chars[i] << std::endl;
	}

	std::cout << "EXCEPTION" << std::endl;
	try {
		std::cout << integers[6] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Out of Range error" << std::endl;
	}

	std::cout << "USING COPY CONSTRUCTOR" << std::endl;
	Array<int> integers_copy = integers;
	std::cout << "NEW" << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		integers_copy[i] = i * 2;
		std::cout << integers_copy[i] << std::endl;
	}
	std::cout << "OLD" << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		std::cout << integers[i] << std::endl;
	}

	return (0);
}