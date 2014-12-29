#pragma once 
#include <string>

class Screen {
public:
	Screen();
	Screen(std::string);
	std::string getMessage();
private:
	std::string Message;
};