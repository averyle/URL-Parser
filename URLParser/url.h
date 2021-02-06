#include <string>
#include <iostream>
#include <cstring>

class url {
public:
	url(std::string link);

	std::string getURL();
	std::string getScheme();
	std::string getAuthority();
	std::string getPath();

private:
	std::string myLink, scheme, authority, path;
};
