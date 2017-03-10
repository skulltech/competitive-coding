#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


int main(int argc, char const *argv[])
{
	int n, count = 0, high = 0;
	cin >> n;
	unordered_map<int, int> map;
	unordered_map<int, int>::iterator it;

	for (int i = 0; i < 2*n; i++)
	{
		int input; 
		cin >> input;
		it = map.find(input);
		
		if (it == map.end()) 
		{
			count += 1;
			map[input] = 1;
		} 
		else 
		{
			count -= 1;
			map.erase(input);
		}
		
		if (count > high) 
		{
			high = count;
		}
	}

	cout << high << endl;
	return 0;
}
