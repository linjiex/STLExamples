//////////////////////////////////////////////////////////////////////////////////
//
// STL Examples: How to find position of specific value in a vector
// 
// Url:http://stlexamples.com/how-to-find-an-element-in-an-array-with-stl
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
#include <algorithm>

// Output the content of an array
void OutputVector(int* pArray, int count)
{
	std::cout << "The content of the array:" << std::endl;
	
	for(int i = 0; i < count; i++)
	{
		std::cout << pArray[i] << std::endl;
	}
}

int main()
{
	int array[5];
	
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
	
	OutputVector(array, 5);
	
	int valueToFind = 4; 
	
	int* position = std::find(array, array + 5, valueToFind);
	
	bool exists = (position != (array + 5));
	
	if (exists)
	{
		std::cout << "Found it." << std::endl;
		
		std::cout << "The value is " << *position << std::endl;
	}
	else
	{
		std::cout << "Can't fount it." << std::endl;
	}
	
	return 0;
}