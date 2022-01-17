#include <iostream>
#include <string>

auto dane(std::string imie, double waga, int wzrost) -> void 
{
	std::cout << "Imie: " << imie << "\n";
	std::cout << std::endl;
	std::cout << "Waga: " << waga << "kg" << "\n";
	std::cout << std::endl;
	std::cout << "Wzrost: " << wzrost << "cm" << "\n";
}

auto main() -> int 
{
	dane("Alicja", 65, 170);
	std::cout << "\n";
	return 0;
}
