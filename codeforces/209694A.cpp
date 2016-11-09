#include <iostream>
using namespace std;

bool isPrime(int n)
{
	for (int i=2; i<=n/2; i++)
	{
		if (n%i == 0) return false;
	}
	return true;
}

int findNumber(int input)
{
	for (int i=0; i<=input/2; i++)
	{
		if (not isPrime(i))
		{
			if (not isPrime(input-i)) return i;
		}
	}

	return 0;
}

int main(int argc, char const *argv[])
{
	int input;
	cin >> input;
	int result = findNumber(input);
	cout << result << " " << (input-result) << endl;

	return 0;
}