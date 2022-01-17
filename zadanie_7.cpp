#include <iostream>
#include <string>

auto count_chars(std::string n, char z)
{
	int x = 0;
	int y = n.size();
	
	for (int i = 0; i < y; i++)
	{
		if (n[i] == z)
		x++;
	}
	
	return x;
}

auto main() -> int 
{
	std::string napis;
	char znak;
	
	std::cout << "Podaj napis: ";
	std::cin >> napis;
	
	std::cout << "Podaj znak z napisu: ";
	std::cin >> znak;
	
	int ile_razy = count_chars(napis, znak);
	
	std::cout << "Znak " << znak << " wystapil " << ile_razy << " razy w napisie " << napis;
	std::cout <<" ";
	
return 0;
} 
