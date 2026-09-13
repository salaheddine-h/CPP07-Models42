#include "iter.hpp"

void printInt(int &i)
{
    std::cout << i << std::endl;
}

void printString(std::string &s)
{
    std::cout << s << std::endl;
}

int main()
{
    int nums[] = {1, 2, 3, 9};
    std::string words[] = {"salah", "eddine", "hali"};

	std::cout<<"=-=-=-=-=-=-=-=-=-=-=-=\n";
    ::iter(nums, 4, printInt);
	std::cout<<"=-=-=-=-=-=-=-=-=-=-=-=\n";
    ::iter(words, 3, printString);
	std::cout<<"=-=-=-=-=-=-=-=-=-=-=-=\n";
	return(0);
}