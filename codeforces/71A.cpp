#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, i, length;
	cin >> n;
	string input[n];

	for (i=0; i<n; i++){
		cin >> input[i];
	}

	for (i=0; i<n; i++){
		length = input[i].size();

		if (length>10) {
			cout << input[i][0] << (length-2) << input[i][length-1] << endl;
		} else {
			cout << input[i] << endl;
		}
	}

	return 0;
}
