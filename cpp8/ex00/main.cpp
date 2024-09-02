#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>
#include <iostream>

#include "easyfind.hpp"

int    add_rand(std::vector<int> &arr)
{ 
    srand(time(NULL));

	std::cout << "Adding random number..." << std::endl;
    for (int i = 0; i < 8; i++)
    {
        arr.push_back(rand());
		std::cout << arr[i];
		if (i != 7)
			std::cout << ", ";
    }
	std::cout << std::endl;
    return arr[4];
}

int main()
{
    std::vector<int> arr;
    int i = add_rand(arr);
    try
    {
        std::cout << *easyfind(arr, i) << "\n";
	}
    catch(const std::out_of_range &e)
    {
		std::cout << e.what() << std::endl;
	}
}