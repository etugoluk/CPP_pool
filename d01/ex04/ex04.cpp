
#include <iostream>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string &s_ref = s;
	std::string *s_ptr = &s;
	std::cout << "Ptr string: " << *s_ptr << std::endl;
	std::cout << "Ref string: " << s_ref << std::endl;
	return (0);
}
