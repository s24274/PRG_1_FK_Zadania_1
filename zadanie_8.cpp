#include <iostream>

auto pokaz(std::string s, int n) -> void 
{

	int i = 0;
	int l = s.size()-1;
	
		while ( i <= l )
		{
			std::cout << s[i];
			i+=n;
		}
}

auto main() -> int 
{
	pokaz("alamakotagosiamapsa", 5);
	std::cout << " ";
	
return 0;
}
