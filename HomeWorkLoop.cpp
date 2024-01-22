#include<iostream>
//#define PRINT_CHESS
//#define BIG_CHESS



int main()
{
#if defined PRINT_CHESS
	constexpr int horizontal_line = 196;
	constexpr int white_symbol = 219;
	constexpr int black_symbol = 32;
	constexpr int vertical_line = 179;
	constexpr int upper_left_corner = 218;
	constexpr int upper_right_corner = 191;
	constexpr int down_left_corner = 192;
	constexpr int down_right_corner = 217;
	constexpr int frame = 2;
	int square = 0;
	std::cin >> square;
	square *= 2;
	
	
	for(int i = 0; i < square + frame; i++)
	{
		
		for(int j = 0, count = 0; j < square + frame; j++, count++)
		{
			if(i == 0 && j == 0)
			{
				std::cout << static_cast<unsigned char>(upper_left_corner);
			}
			else if((i == 0 && j <= square )  || (i == square / 2 + frame - 1 && j <= square  && j != 0))
			{
				std::cout << static_cast<unsigned char>(horizontal_line);
			}
			else if(i == 0 && j == square + frame - 1)
			{
				std::cout << static_cast<unsigned char>(upper_right_corner);
			}
			else if(i == square / 2 + frame - 1 && j == 0)
			{
				std::cout << static_cast<unsigned char>(down_left_corner);
			}
			else if(i == square / 2 + frame - 1 && j == square + frame - 1)
			{
				std::cout << static_cast<unsigned char>(down_right_corner);
			}
			else if((j == 0 || j == square / 2 + frame - 1) && i != 0 && i <= square / 2)
			{
				std::cout << static_cast<unsigned char>(vertical_line);
			}
			else if ((j != 0 || j < square + frame - 1) && (i != 0 && i <= square / 2) && count < square / 2 + 1)
			{
				(i + j) % 2 == 0 ? std::cout << static_cast<unsigned char>(white_symbol) << static_cast<unsigned char>(white_symbol) :
				                   std::cout << static_cast<unsigned char>(black_symbol) << static_cast<unsigned char>(black_symbol);
				//std::cout << "*";
			}
		}
		std::cout << std::endl;
	}
#endif
#if defined BIG_CHESS
	int n = 5;
	//std::cin >> n;
	for(int a = 0; a < n; a++ )
	{
		for(int b = 0; b < n; b++)
		{
			for(int c = 0; c < n; c++)
				{
					for(int d = 0; d < n; d++)
					{
						(a + c) % 2 == 0 ? std::cout << "*" : std::cout << " ";
					}
					
				}
		std::cout << std::endl;
		}
	}

#endif

	return 0;
}
