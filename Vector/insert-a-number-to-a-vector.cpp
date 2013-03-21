/////////////////////////////////////////////////////////////
//
// STL Examples: Insert a number to a Vector
// 
// Url:http://stlexamples.com/insert-a-number-to-a-vector
// Author: Lin Jie(http://linjiex.com)
// Date: 2012-12-18
//
/////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> numberVector;
	
	numberVector.push_back(5);
	
	for(size_t i = 0; i < 1; ++i)
	{
		std::cout << numberVector[i] << std::endl;
	}
	
	return 0;
}