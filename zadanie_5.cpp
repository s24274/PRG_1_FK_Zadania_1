#include <iostream>

auto is_even(int x) -> bool
{
	if (x%2==0) 
	return true;
	else 
	return false;
}

auto main() -> int
{
	int x = 0;
	
	std::cout << "Podaj liczbe, a sprawdze, czy jest parzysta: ";
	std::cin >> x;
	
	bool y = is_even(x);
	
	if (y) 
	std::cout << x << " jest parzysta" << "\n";
	else
	std::cout << x << " nie jest parzysta" << "\n";
	
	std::cout << "\n";
	
return 0;
}
