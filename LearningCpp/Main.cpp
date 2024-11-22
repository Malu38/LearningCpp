#include <iostream>

int main(int argc, char** argv)
{
	unsigned firSize = 0;
	const char firCustomization = '*';
	const unsigned firMinSize = 5;
	const unsigned firMaxSize = 25;

	std::cout << "Please enter the fir size in range [" << firMinSize << ", " << firMaxSize << "] : ";
	std::cin >> firSize;

	if (firSize < firMinSize || firSize > firMaxSize)
	{
		std::cerr << "The size must be in range [" << firMinSize << ", " << firMaxSize << "]." << std::endl;
		std::cerr << "Exiting." << std::endl;
		return -1;
	}

	std::cout << std::endl;

	// TODO
	int firNum = 2;
	for (int i = 0; i <= firSize; i++)
	{
		std::cout << std::string(firSize - i, ' ') << std::string(firNum * i, '*') << std::endl;
	}

	return 0;
}