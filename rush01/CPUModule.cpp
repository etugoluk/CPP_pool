#include "CPUModule.hpp"


CPUModule::CPUModule() : name("CPU info"), is_buffer(true)
{
	for (int i = 0; i < MAX_MODULE_BUFFER_SIZE; ++i)
		buff.push_front(100);
}

CPUModule::~CPUModule()
{}

std::vector<std::string> const & CPUModule::getData() const
{
	return data;
}

void CPUModule::parseData()
{
	std::string 	tmp;

	system("bash cpu.sh");
	std::ifstream		icpu("temp");

	std::getline(icpu, tmp);
	tmp.replace(0, std::string("machdep.cpu.brand_string").size(), std::string("CPU model"));
	if (data.empty())
		data.push_back(tmp);
	else
		data[0] = tmp;

	std::getline(icpu, tmp);
	if (data.size() == 1)
		data.push_back(tmp);
	else
		data[1] = tmp;

	std::getline(icpu, tmp);
	buff.push_back(atoi(tmp.c_str()));
	buff.pop_front();

	icpu.close();
}

std::string const &	CPUModule::getName() const
{
	return name;
}

bool 	 			CPUModule::isBuff() const
{
	return is_buffer;
}

std::list<int> const &	CPUModule::getBuff() const
{
	return buff;
}
