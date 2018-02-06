/*
Given a year, return the century it is in. The first century spans from the year 1 up to and including the year 100, the second - 
from the year 101 up to and including the year 200, etc.

Example

    For year = 1905, the output should be
    centuryFromYear(year) = 20;
    For year = 1700, the output should be
    centuryFromYear(year) = 17.

Input/Output

[input] integer year //  A positive integer, designating the year.

Constraints: 1 ≤ year ≤ 2005.

[output] integer // The number of the century the year is in.
*/
#include <iostream>

int centuryFromYear(int year);

int main(){
	std::cout<<"Enter year: \n";
	int entry, century;
	std::cin>>entry;

	century = centuryFromYear(entry);

	std::cout<<"The century is: "<<century<<std::endl;

}

int centuryFromYear(int year) {
	int count {0};

	do{
		year-=100;
		++count;
	}while(year>0);

	return count;

}
