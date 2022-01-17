#include <iostream>
#include <string>

auto oba_imiona( std::string a, std::string b) -> void
{ 
	if (a.size() > b.size()) 
	std::cout << "Pierwsze imie jest dluzsze niz drugie!" << "\n";
	
	else 
	{
		if (b.size() > a.size())
		std::cout << "Drugie imie jest dluzsze niz pierwsze..." << "\n";
		
		else
		std::cout << "Imiona maja taka sama dlugosc." << "\n";
	}
}

auto main() -> int 
{
	std::string a, b;
	
	std::cout << "Podaj swoje pierwsze imie: ";
	std::cin >> a;
	std::cout << "Podaj swoje drugie imie: ";
	std::cin >> b;
	
	oba_imiona(a,b);
	std::cout << "\n";

return 0;
}
	
