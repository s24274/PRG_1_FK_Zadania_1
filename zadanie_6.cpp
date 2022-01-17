#include <iostream>

auto is_even(int x, int z) -> bool
{
	if (x%z==0) 
	return true;
	else 
	return false;
}

auto main() -> int
{
	int x = 0;
	int z = 0;
	
	std::cout << "Podaj liczbe: ";
	std::cin >> x;
	std::cout << "Podaj druga liczbe: ";
	std::cin >> z;
	
	bool y = is_even(x,z);
	
	if (y) 
	std::cout << x << " jest podzielna przez " << z << "\n";
	else
	std::cout << x << " nie jest podzielna przez " << z << "\n";
	
	std::cout << "\n";
	
return 0;
}
