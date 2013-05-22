#include <iostream>

#include <boost/lexical_cast.hpp>

int main()
{
	int foo = boost::lexical_cast<int>("42");
	std::cout << "Casting is fun! " << foo << std::endl;
	return 0;
}
