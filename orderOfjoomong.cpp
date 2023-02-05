#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false); //stdio / iostream syncronhization
	cin.tie(NULL);
	cout.tie(NULL); //stream(buffer)of cin and cout splited

	int N, M;
	int temp = 0;
	int count = 0;
	int i = 0, j = 0;

	cin >> N >> M;
	vector<int> A(N, 0);

	for (i; i < N; i++) {
		cin >> A[i];
	}
	i = 0;

	for (i; i < M-1; i++) {
		for (j=i+1; j < N; j++) {
			temp = M - A[i];
			if ((A[j] == temp) && i != j) count++;
		}
	}
	cout << count;

}