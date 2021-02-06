#include <iostream>
#include <string>
#include "url.h"
#include <chrono>

url::url(std::string link)
	: myLink{link} {}

std::string url::getURL() {
	return myLink;
}

std::string url::getScheme() {
	int schemeIndex = myLink.find(":");
	scheme = myLink.substr(0,schemeIndex + 1);
	return scheme;
}

std::string url::getAuthority() {
	int authorityBegin = myLink.find("://");
	std::string authorityStart = myLink.substr(authorityBegin + 1, myLink.size() - 1);
	int authorityEnd = authorityStart.find_first_of("/",2);
	authority = authorityStart.substr(0, authorityEnd);
	return authority;
}

std::string url::getPath() {
	int authorityBegin = myLink.find("://");
	std::string authorityStart = myLink.substr(authorityBegin + 1, myLink.size() - 1);
	int authorityEnd = authorityStart.find_first_of("/", 2);
	path = authorityStart.substr(authorityEnd, authorityStart.size() - 1);
	return path;
}
