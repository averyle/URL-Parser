#include <string>
#include <iostream>
#include "url.h"
using namespace std;

int main()
{
    std::cout << "Please enter an URL: ";
    std::string link;
    std::cin >> link;
    url url{link};
    std::cout << "Scheme = " << url.getScheme() << '\n'
        << "Authority = " << url.getAuthority() << '\n'
        << "Path = " << url.getPath();
 }