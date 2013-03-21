//////////////////////////////////////////////////////////////////////////////////////
//
// STL Examples: How to Remove a Specific Value in a Vector
// 
// Url:http://stlexamples.com/how-to-remove-a-specific-value-in-a-vector
//
// Author: Lin Jie(http://linjiex.com)
//
// Date: 2012-12-24
//
//////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <algorithm>

// Output the content of the vector
void OutputVector(std::vector<int>& numberVector)
{
	std::cout << "The content of the vector." << std::endl;
	
	for(std::vector<int>::iterator it = numberVector.begin(); 
		it != numberVector.end(); it++)
	{
		std::cout << *it << std::endl;
	}
}

int main()
{
	std::vector<int> numberVector;
	
	numberVector.push_back(1);
	numberVector.push_back(2);
	numberVector.push_back(3);
	numberVector.push_back(4);
	numberVector.push_back(5);
	
	OutputVector(numberVector);
	
	int valueToFind = 4; 
	
	std::vector<int>::iterator position = std::find(numberVector.begin(), 
		numberVector.end(), valueToFind
	);
	
	bool isValid = (position != numberVector.end());
	
	if (isValid)
	{
		std::cout << "Delete the specific value:" << *position << std::endl;
		numberVector.erase(position);
	}
	else
	{
		std::cout << "Not a valid position." << std::endl;
	}

	OutputVector(numberVector);
	
	return 0;
}