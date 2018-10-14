#include "CPUModule.hpp"


CPUModule::CPUModule()
{}

CPUModule::~CPUModule()
{}

std::vector<std::string> const & CPUModule::getData() const
{
	return data;
}

void CPUModule::parseData()
{
	std::string 	tmp;

	system("sysctl machdep.cpu.brand_string > temp");
	std::ifstream		icpu_br("temp");
	std::getline(icpu_br, tmp);
	tmp.replace(0, std::string("machdep.cpu.brand_string").size(), std::string("CPU model"));
	if (data.empty())
	{
		data.push_back(tmp);
	}
	else
	{
		data[0] = tmp;
	}
	icpu_br.close();

	system("top -l1 -n1 | grep 'CPU usage:' > temp");
	std::ifstream		icpu_us("temp");
	std::getline(icpu_us, tmp);
	if (data.size() == 1)
	{
		data.push_back(tmp);
	}
	else
	{
		data[1] = tmp;
	}
	icpu_us.close();
}
