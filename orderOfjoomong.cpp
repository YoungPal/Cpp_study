#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false); //stdio / iostream syncronhization
	cin.tie(NULL);
	cout.tie(NULL); //stream(buffer)of cin and cout splited

	int N, M;
	int temp = 0;
	itn count = 0;
	int i=0, j=0
	vector vector<int> A(N, 0);

	cin >> N >> M;
	
	for (i; i < N; i++) {
		cin >> A[i];
	}
	i = 0;

	for (i; i < M / 2; i++) {
		for (j; j < N; j++) {
			temp = M - A[i];
			if ((A[j] == M) && i != j) count++;
		}
		j++;
	}
	cout << M

}