#include <iostream>
using namespace std;

int main(){
	int n, k, counter = 0;
	cin >> n >> k;
	int scores[n];

	for (int i = 0; i < n; i++) {
		cin >> scores[i];
	}

	for (int i = 0; i < n;  i++) {
		if (scores[i] <= 0 || scores[i] < scores[k-1]) {
			break;
		}

		counter += 1;
	}

	cout << counter << endl;

	return  0;
}