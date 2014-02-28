#include <iostream>
#include <stdlib.h>

#include "cosa.hxx"


int main()
{
	cosa c(1);
	
	std::cout << "cosa has " << c.get() << std::endl;
}