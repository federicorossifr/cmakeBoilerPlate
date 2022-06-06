#include <libname/Hello.hpp>

void Hello::say(std::string&& greet) {
	std::cout << greet << std::endl;
}
