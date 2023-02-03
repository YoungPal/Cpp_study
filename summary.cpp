#include <iostream>
using namespace std;

int main() {
	int data_n, summary_m;
	int sum = 0;
	int data[10] = { 0, };
	cin >> data_n;
	cin >> summary_m;

	for (int i = 0; i < data_n; i++) {
		cin >> data[i];
	}

	int i, j = 0;
	for (int k = 0; k < summary_m; k++) {
		cin >> i;
		i -= 1;
		cin >> j;
		for (i; i < j; i++) {
			sum += data[i];
		}
		cout << sum;
		sum = 0;
	}

}
