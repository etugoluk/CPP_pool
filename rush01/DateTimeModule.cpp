#include "DateTimeModule.hpp"

DateTimeModule::DateTimeModule()
{}

DateTimeModule::~DateTimeModule()
{}

std::vector<std::string> const & DateTimeModule::getData() const
{
	return data;
}

void DateTimeModule::parseData()
{
	std::string 	tmp;

	system("date '+%H:%M' > temp");
	std::ifstream		idate("temp");
	std::getline(idate, tmp);
	tmp = "Time: " + tmp;
	if (data.empty())
	{
		data.push_back(tmp);
	}
	else
	{
		data[0] = tmp;
	}
	idate.close();

	system("date '+%Y-%m-%d' > temp");
	std::ifstream		itime("temp");
	std::getline(itime, tmp);
	tmp = "Date: " + tmp;
	if (data.size() == 1)
	{
		data.push_back(tmp);
	}
	else
	{
		data[1] = tmp;
	}
	itime.close();

	system("uptime | cut -d ' ' -f 4-7 | cut -d ',' -f 1-2 > temp");
	std::ifstream		iuptime("temp");
	std::getline(iuptime, tmp);
	tmp = "Uptime: " + tmp;
	if (data.size() == 2)
	{
		data.push_back(tmp);
	}
	else
	{
		data[2] = tmp;
	}
	iuptime.close();
}
