#include <iostream>
#include <string>

auto box_print(std::string tab[]) -> void

{ 
	int h = tab[0].size();
	
	for (int i = 0; i < 5; i++)
	{
		int l = tab[i].size();
		if (l > h)
		{
			h = l;
		}
	}
	for (int i = 0; i < h + 4; i++)
	{
		std::cout << "*";
	}
		std::cout << "\n";
	
		
	for (int i = 0; i < 5; i++)
	{
		std::cout << "* ";
		std::cout << tab[i];
		int l = tab[i].size();
		
			if (l < h)
			{
				for (int j = l; j < h; j++)
				{
					std::cout << " ";
				}
			}
		std::cout << " *";
		std::cout << "\n";
	}
	
	for (int i = 0; i < h+4; i++)
	{
		std::cout << "*";
	}
		std::cout << "\n";
	
}

auto main() -> int
{
	std::string box[5] = {"Hello", "World", "in", "a", "frame"};
	
	box_print(box);
	std::cout << "\n";
	
return 0;
}
