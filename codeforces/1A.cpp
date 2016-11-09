#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;


int algorithm(int length, int breadth, int tile_size)
{
	int rows, cols;

	rows = ceil((float)breadth/(float)tile_size);
	cols = ceil((float)length/(float)tile_size);

	return rows*cols;
}


int main()
{
	int n, m, a;
	int cols, rows;

	string line;
	while (getline(cin, line))
	{
		istringstream iss(line);
		int m, n, a;

		if (iss >> m >> n >> a)
		{
			cout << algorithm(m, n, a) << endl;
			break;
		}

	}

	return 0;
}
