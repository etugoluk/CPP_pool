// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Logger.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:32:59 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:33:00 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

class Logger
{
	std::string filename;

	void logToConsole(std::string const &str);
	void logToFile(std::string const &str);
	std::string makeLogEntry(std::string msg);
	
public:
	void setFilename(std::string const &name);
	void log(std::string const & dest, std::string const & message);
};

#endif