#include <iostream>
#include "a.h"

void A::function1() {
	std::cout << "function1 - comp A" << std::endl;	
	function2();
}

int main() {
	A::function1();
	return 0;
}
