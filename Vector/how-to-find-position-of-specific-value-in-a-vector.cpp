//////////////////////////////////////////////////////////////////////////////////////
//
// STL Examples: How to find position of specific value in a vector
// 
// Url:http://stlexamples.com/how-to-find-position-of-specific-value-in-a-vector
//
// Author: Lin Jie(http://linjiex.com)
//
// Date: 2012-12-23
//
//////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> numberVector;
	
	numberVector.push_back(1);
	numberVector.push_back(2);
	numberVector.push_back(3);
	numberVector.push_back(4);
	numberVector.push_back(5);
	
	int valueToFind = 4; 
	
	std::vector<int>::iterator position = std::find(numberVector.begin(), numberVector.end(), valueToFind);
	
	std::cout << "The value is " << *position << std::endl;
	
	bool exists = (position != numberVector.end());
	
	if (exists)
	{
		std::cout << "Exists: true" << std::endl;
	}
	else
	{
		std::cout << "Exists: false" << std::endl;
	}

	int index = position - numberVector.begin();
	
	std::cout << "Index: " << index << std::endl;
	
	return 0;
}