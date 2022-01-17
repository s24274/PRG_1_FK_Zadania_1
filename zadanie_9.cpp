#include <iostream>
#include <cstring>

auto is_palindrome(char tab[]) -> bool
{ 
	int i = 0, j = strlen(tab)-1;
	
	while (i < j)
	{ 
		if (tab[i] != tab[j]) 
		return false;
		
		++i;
		--j;
	}
	
	return true;
}

auto main() -> int

{
	char tab[100];
	
	std::cout << "Podaj wyraz, a sprawdze, czy jest palindoromem: ";
	std::cin >> tab;
	
	if (is_palindrome(tab))
		std::cout << "Wyraz " << tab << " jest palindromem" << " ";
	
	else 
		std::cout << "Wyraz " << tab << " nie jest palindromem" << " ";
		
return 0;
}
