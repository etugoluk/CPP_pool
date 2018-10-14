#include "DateTimeModule.hpp"

DateTimeModule::DateTimeModule() : name("Date & time info"), is_buffer(false)
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

	system("bash date_time.sh");
	std::ifstream		idate_time("temp");

	std::getline(idate_time, tmp);
	tmp = "Time: " + tmp;
	if (data.empty())
		data.push_back(tmp);
	else
		data[0] = tmp;

	std::getline(idate_time, tmp);
	tmp = "Date: " + tmp;
	if (data.size() == 1)
		data.push_back(tmp);
	else
		data[1] = tmp;

	std::getline(idate_time, tmp);
	tmp = "Uptime: " + tmp;
	if (data.size() == 2)
		data.push_back(tmp);
	else
		data[2] = tmp;

	idate_time.close();
}

std::string const &	DateTimeModule::getName() const
{
	return name;
}

bool 	 			DateTimeModule::isBuff() const
{
	return is_buffer;
}
