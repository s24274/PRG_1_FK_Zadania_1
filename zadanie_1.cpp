#include <iostream>
#include <string>

auto lp(int a, int b) -> void
{
	std::string s = {};
	
	for (int i = a; i < b; i++)
	{
		int c = 0;
		for (int j = 2; j <= i; j++)
		{
			if (i%j == 0)
			c++;
		}
		
		if (c == 1)
		{
			std::cout << i <<" ";
			s = s + std::to_string(i) + " ";
		}
	}
	std::cout << "\n";
	std::cout << s << "\n";
	
}

auto main() -> int 
{
	lp(2, 20);
	std::cout << "\n";

return 0;

}
