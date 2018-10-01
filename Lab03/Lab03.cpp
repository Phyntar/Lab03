//Lab03.cpp
//Brandon Endsley
//COSC 2030

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

short sumShort(short endVal);
long sumLong(long endVal);
float floatFactorial(long endVal);
double doubleFactorial(long endVal);
float sumRecip(float endVal);

int main()
{
	short n = 0;
	cout << "please enter a short that is for the summationing (n>=1): ";
	cin >> n;

	cout << "\n\nsum: " << sumShort(n) << "\n\n";


	long n2 = 0;
	cout << "please enter a long that is for the summationing (n>=1): ";
	cin >> n2;

	cout << "\n\nsum: " << sumLong(n2) << "\n\n";

	long n3 = 0;
	cout << "please enter a float that is for the facortialing (n>=1): ";
	cin >> n3;

	cout << "\n\nfactorial: " << floatFactorial(n3) << "\n\n";

	long n4 = 0;
	cout << "please enter a double that is for the facortialing (n>=1): ";
	cin >> n4;

	cout << "\n\nfactorial: " << doubleFactorial(n4) << "\n\n";

	
	float n5 = 0;
	cout << "please enter a float that is for the sumationing Recipricals (n>=1): ";
	cin >> n5;

	cout << "\n\nfactorial: " << sumRecip(n5) << "\n\n";
	
	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	cout << endl;
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	cin >> n;
}	


short sumShort(short endVal)
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

long sumLong(long endVal)
{
	if (endVal >= 1)
	{
		long sum = 0;
		for (long i = 1; i <= endVal; i++)
		{
			sum += i;
		}
		return sum;

	}
	return 0;
}

float floatFactorial(long endVal)
{
	if (endVal >= 1)
	{
		float sum = 1;
		for (long i = 1; i <= endVal; i++)
		{
			sum *= i;
		}
		return sum;

	}
	return 0;
}

double doubleFactorial(long endVal)
{
	if (endVal >= 1)
	{
		double sum = 1;
		for (long i = 1; i <= endVal; i++)
		{
			sum *= i;
		}
		return sum;

	}
	return 0;
}

float sumRecip(float endVal)
{
	if (endVal >= 1)
	{
		float sum = 0;
		for (float i = 1; i <= endVal; i++)
		{
			sum += 1/i;
		}
		return sum-1;

	}
	return 0;
}