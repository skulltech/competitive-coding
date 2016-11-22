#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool ifContains(string input, char inputChar)
{
	if (find(input.begin(), input.end(), inputChar) != input.end()) return true;
	else return false;
}

bool ifPangram(string input)
{
	vector<char> lowerAlphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	vector<char> upperAlphabet = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	for (int i=0; i<26; i++)
	{
		if (ifContains(input, lowerAlphabet[i]) || ifContains(input, upperAlphabet[i])) continue;
		else return false;
	}

	return true;
}

int main(int argc, char const *argv[])
{
	int n;
	string input;
	cin >> n >> input;

	if (ifPangram(input)) cout << "YES";
	else cout << "NO";

	return 0;
}