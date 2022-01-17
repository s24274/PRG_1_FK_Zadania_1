#include <iostream>
#include <string>

auto main() -> int 
{
	std::string imie;
	int z, m;
	z = 0;
	m = 0;
	
	for (int i = 0; i < 5; i++)
	{ 
		std::cout << "Podaj imie: ";
		std::cin >> imie;
		
		if (imie[imie.size()-1] == 'a')
		z++;
		else
		m++;
	}
	
	std::cout << "Ilosc imion zenskich: " << z << "\n";
	std::cout << "Ilosc imion meskich: " << m << "\n";
	std::cout << "\n";
	
return 0;
}
