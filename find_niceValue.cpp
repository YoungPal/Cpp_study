#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); //stdio / iostream syncronhization
	cin.tie(NULL);
	cout.tie(NULL); //stream(buffer)of cin and cout splited

	int N;
	cin >> N;
	vector<int> A(N, 0);
	
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	sort(A.begin(), A.end()); //for using tow-point must be sorted
	int Result = 0;

	for (int k = 1; k < N; k++) {
		long find = A[k];
		int i = 0;
		int j = k-1; //no necessary j=N-1, in case k=a+b always a<K & b<K

		while (i < j) {
			if (A[i] + A[j] == find) {
				if (i != k && j != k) {
					Result++;
					break;
				}
				else if (i == k) {
					i++;
				}
				else if (j == k) {
					j--;
				}
			}
			else if (A[i] + A[j] < find) {
				i++;
			}
			else {
				j--;
			}
		}
	}
	cout << Result << "\n";
}
