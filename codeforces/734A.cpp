#include <iostream>
#include <string>

using namespace std;

string getWinner(string input)
{
	int anton = 0, danik = 0;
	for (int i=0; i<input.size(); i++)
	{
		if (input[i] == 'A') anton++;
		if (input[i] == 'D') danik++;
	}


	if (anton>danik) return "Anton";
	else if (anton<danik) return "Danik";
	else return "Friendship";
}

int main(int argc, char const *argv[])
{
	int n;
	string input;
	cin >> n >> input;

	cout << getWinner(input);
	return 0;
}