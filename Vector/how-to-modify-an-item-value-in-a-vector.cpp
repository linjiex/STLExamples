//////////////////////////////////////////////////////////////////////////////////////
//
// STL Examples: How to Modify a Item value in a Vector
// 
// Url:http://stlexamples.com/how-to-modify-a-item-value-in-a-vector
//
// Author: Lin Jie(http://linjiex.com)
//
// Date: 2012-12-25
//
//////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>

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
	
	numberVector[2] = 100;
	
	std::cout << "Use index to modify the third item to 100." << std::endl; 
	
	OutputVector(numberVector);
	
	std::vector<int>::iterator position = numberVector.begin() + 2;
	
	*position = 1000;
	
	std::cout << "Use iterator to modify the third item to 1000." << std::endl; 
	
	OutputVector(numberVector);
	
	return 0;
}