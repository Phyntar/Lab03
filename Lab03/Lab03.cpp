//Lab03.cpp
//Brandon Endsley
//COSC 2030

#include <iostream>
using std::cin;
using std::cout;

short sum(short endVal);

int main()
{
	while (true)
	{
		short n = 0;
		cout << "please enter a number that is for the summationing (n>=1): ";
		cin >> n;

		cout << "\n\nsum: " << sum(n) << "\n\n";

	}
}

short sum(short endVal)
{
	if (endVal>= 1)
	{
		short sum=0;
		for(short i =1; i <= endVal;i++)
		{
			sum += i;
		}
		return sum;

	}
	return 0;
}