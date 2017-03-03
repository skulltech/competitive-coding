#include <iostream>
using namespace std;

bool hasDistinctDigits (int input)
{
	int d1, d2, d3, d4;
	d1 = input % 10;
	d2 = (input/10) % 10;
	d3 = (input/100) % 10;
	d4 = (input/1000);

	if (d1!=d2 && d1!=d3 && d1!=d4 && d2!=d3 && d2!=d4 && d3!=d4) return true;
	else return false;
}


int main(int argc, char const *argv[])
{
	int input;
	cin >> input;

	for (int i = input+1; i<10000; i++)
	{
		if (hasDistinctDigits(i))
		{
			cout << i << endl;
			return 0;
		}
	}
}