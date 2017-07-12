
#include <iostream>
#include <fstream>

int main ()
{
	std::fstream f ("test.txt");

	if (!f)
	{
		std::cout << "Unable to open test file" << std::endl;
		return 1;
	}

	while (true)
	{
		std::string str;
		std::getline (f, str);

		if (f)
		{
			std::cout << str << std::endl;
		}
		else
		{
			break;
		}
	}

	return 0;
}
