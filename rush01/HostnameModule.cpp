#include "HostnameModule.hpp"

HostnameModule::HostnameModule() : hostname ("default"), username("default") {}

HostnameModule::HostnameModule(std::string host, std::string user) : hostname (host), username(user) {}

HostnameModule::~HostnameModule() {}

std::string HostnameModule::getHostname() const {
	return hostname;
}

std::string HostnameModule::getUsername() const {
	return username;
}

void HostnameModule::setHostname(std::string) {
	this->hostname = hostname;
}

void HostnameModule::setUsername(std::string) {
	this->username = username;
}