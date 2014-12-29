#include <string>

class Screen {
public:
	Screen(std::string);
	std::string getMessage();
private:
	std::string Message;
};