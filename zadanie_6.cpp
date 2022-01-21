#include <iostream>

auto is_divisible(int x, int z) -> bool
{
	if (x%z==0) 
	return true;
	else 
	return false;
}
auto is_even(int x)
{
	if (is_divisible(x, 2))
	    return true;
	    else
	    return false;
}

auto main() -> int
{
	int x = 0;
	
	
	std::cout << "Podaj liczbe: ";
	std::cin >> x;
	
	bool y = is_even(x);
	
	if (y) 
	std::cout << x << " jest parzysta \n";
	else
	std::cout << x << " nie jest parzysta \n";
	
	std::cout << "\n";
	
return 0;
}
