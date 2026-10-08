#include <iostream>
#include "convert_knots.hpp"

int  main(){
	int knot;
	std::cin>>knot;
	std::cout << knots_to_miles_per_minute(knot) << std::endl;
	return 0;
}
