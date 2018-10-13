#include "CPUModule.hpp"


CPUModule::CPUModule()
{

}

CPUModule::~CPUModule()
{

}

std::vector<std::string> const & CPUModule::getData() const
{
	return data;
}

void CPUModule::parseData()
{
	std::string 	tmp;

	system("sysctl machdep.cpu.brand_string > cpu_brand");
	std::ifstream		icpu_br("cpu_brand");
	std::getline(icpu_br, tmp);
	if (data.empty())
	{
		data.push_back(tmp);
	}
	else
	{
		data[0] = tmp;
	}
	icpu_br.close();

	system("top -l1 -n1 | grep 'CPU usage:' > cpu_usage");
	std::ifstream		icpu_us("cpu_usage");
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


