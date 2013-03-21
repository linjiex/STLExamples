//////////////////////////////////////////////////////////////////////////////////
//
// STL Examples: How to Remove a Specific Value in a Vector
// 
// Url:http://stlexamples.com/how-to-return-a-pointer-to-a-vector-element
//
// Author: Lin Jie(http://linjiex.com)
//
// Date: 2012-12-27
//
// Licence: MIT Licence. 

// Copyright (C) 2012 Lin Jie

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell 
// copies of the Software, and to permit persons to whom the Software is 
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NOEVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
// 
//////////////////////////////////////////////////////////////////////////////////

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
	
	std::cout  << "Get Pointer by Index:" << std::endl;
	
	int* pointer = &(numberVector[2]);
	
	*pointer = 100;
	
	OutputVector(numberVector);
	
	std::cout  << "Get Pointer by Iterator:" << std::endl;
	
	std::vector<int>::iterator position = numberVector.begin() + 2;
	
	int* pointer2 = &(*position);
	
	*pointer2 = 1000;
	
	OutputVector(numberVector);
	
	return 0;
}